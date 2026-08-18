class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> rpp;
        unordered_map<char,int> mpp;
        for(char ch:ransomNote){
            rpp[ch]++;
        }
        for(char ch:magazine){
            mpp[ch]++;
        }
        for(char ch='a';ch<='z';ch++){
            if(mpp[ch]<rpp[ch]) return false;
        }
        return true;
    }
};