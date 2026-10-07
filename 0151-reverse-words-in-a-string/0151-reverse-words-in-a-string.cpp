class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        string ans="";
        for(int i=0;i<n;i++){
            string words="";
            //if(i<n && s[i]==' ') i++;
            while(i<n && s[i]!=' '){
                words=words+s[i];
                i++;
            }
            reverse(words.begin(),words.end());
            if(words.length()>=1){
                ans+=" "+words;
            }
            //ans+=" "+words;
        }
        return ans.substr(1);
    }
};