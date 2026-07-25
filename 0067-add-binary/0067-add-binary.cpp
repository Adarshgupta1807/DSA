class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string res;
        while(i>=0 || j>=0 || carry!=0){
            int digitB = (j >= 0) ? (b[j] - '0') : 0; //(b[j] - '0')char to int me convert karega
            int digitA = (i >= 0) ? (a[i] - '0') : 0;
            int sum = digitA + digitB + carry;
            int newdigit=sum%2;
            carry=sum/2;
            res.push_back('0' + newdigit);// newdigit (0 ya 1) ko wapas char mein badla
            i--;
            j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};