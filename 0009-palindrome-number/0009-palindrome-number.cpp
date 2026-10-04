class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long og=x;
        long long rev=0;
        while(x>0){
            long long rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(og==rev) return true;
        else return false;
    }
};