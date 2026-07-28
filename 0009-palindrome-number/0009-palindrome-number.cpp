class Solution {
public:
    bool isPalindrome(int x) {
        long original=x;
        long rev=0;
        while(x>0){
        long rem=x%10;
        rev=rev*10+rem;
        x=x/10;
        }
        if(rev==original) return true;
        else return false;
    }
};