class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1 = "qwertyuiop";
        string r2 = "asdfghjkl";
        string r3 = "zxcvbnm";
        vector<string> ans;
        for(string s:words){
            if(isValid(s,r1) || isValid(s,r2) || isValid(s,r3)){
                ans.push_back(s);
            }
        }
        return ans;
    }
    bool isValid(string s,string r){
        for(int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
        for(int i=0;i<s.length();i++){
            if(r.find(s[i])==string::npos) return false;
        }
        return true;
    }
};