class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(int a:s){
            if(isalnum(a)){
                result+=tolower(a);
            }
        }
        int i=0;
        int j=result.size()-1;
        while(i<j){
            if(result[i]==result[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};