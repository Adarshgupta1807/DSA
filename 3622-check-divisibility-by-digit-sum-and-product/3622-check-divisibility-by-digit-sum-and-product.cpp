class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int sum=0;
        int prod=1;
        while(n>0){
            int digit=n%10;
            sum=sum+digit;
            prod=prod*digit;
            n=n/10;
        }
        return (original%(sum+prod)==0);
    }
};
// class Solution {
// public:
//     bool checkDivisibility(int n) {
//         int original = n;   // original number safe rakho
//         int sum = 0;
//         int prod = 1;
//         while (n > 0) {                 // fix 1: n>0
//             int digit = n % 10;
//             sum = sum + digit;
//             prod = prod * digit;
//             n = n / 10;
//         }
//         return (original % (sum + prod) == 0);   // fix 2: original use karo
//     }
// };