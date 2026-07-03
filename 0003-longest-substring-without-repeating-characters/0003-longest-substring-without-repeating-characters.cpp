class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxlen=0;
        int right=0;
        unordered_map<int,int> mpp;
        while(right<s.size()){
            mpp[s[right]]++;
            while(mpp[s[right]]>1){
                mpp[s[left]]--;
                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};