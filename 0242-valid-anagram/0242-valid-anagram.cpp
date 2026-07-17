class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        for(char ch:s){
            mpp1[ch]++;
        }
        for(char ch:t){
            mpp2[ch]++;
        }
        for(char ch='a';ch<='z';ch++){
            if(mpp1[ch]!=mpp2[ch]) return false;
        }
        return true;
    }
};