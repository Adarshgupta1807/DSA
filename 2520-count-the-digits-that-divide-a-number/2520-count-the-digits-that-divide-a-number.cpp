class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int num2=num;
        while(num>0){
            int n=num%10;
            if(num2%n==0) count++;
            num=num/10;
        }
        return count;
    }
};