class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()>t.length()) return false;
        unordered_map<char,int> count;
        for(char ch:s){
            count[ch]++;
        }
        for(char cht:t){
            if(count.find(cht)==count.end() || count[cht]==0){
                return false;
            }
            else{
                count[cht]--;
            }
        }
        return true;
    }
};