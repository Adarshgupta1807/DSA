class Solution {
public:
    string reverseWords(string s) {
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        string words="";
        while(i<s.size()&& s[i]!=' '){
            words=words+s[i];
            i++;
        }
        reverse(words.begin(),words.end());
        if(words.length()>0){
            ans+=" "+words;
        }
    }
    return ans.substr(1);
    }
};