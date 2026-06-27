class Solution {
public:
    string commonprefix(string a,string b){
        int i=0;
        while(i<a.size()&& i<b.size() && a[i]==b[i]){
            i++;
        }
        return a.substr(0,i);
    }
    string longestCommonPrefix(vector<string>& strs) {
        string result=strs[0];
        for(int i=1;i<strs.size();i++){
            result=commonprefix(result,strs[i]);
        }
        if(result=="") return "";
        return result;
    }
};