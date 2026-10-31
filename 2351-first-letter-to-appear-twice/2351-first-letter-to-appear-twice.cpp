class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> mpp(26,0);
        for(int i=0;i<s.size();i++){
            int idx = s[i] - 'a';
            mpp[idx]++;
            if(mpp[idx]==2) return s[i];
        }
        return 'a';
    }
};