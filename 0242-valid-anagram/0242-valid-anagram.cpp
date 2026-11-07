class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mpp;
        for(char ch:s) mpp[ch]++;
        for(char ch:t){
            if(mpp.find(ch)==mpp.end() || mpp[ch]==0) return false;
            else mpp[ch]--;
        }
        return true;
    }
};