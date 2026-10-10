class Solution {
public:
    int myAtoi(string s){
        //if s is empty 
        if(s.empty()) return 0;
        const long long MAX_INT = INT_MAX;
        const long long MIN_INT = INT_MIN;
        int n=s.size();
        int i=0;
        // contains only whitespaces
        if(i==n) return 0;
        // skipping leading spaces
        while(i<n && s[i]==' ') i++;
        //handling -ve and +ve signs
        int sign=1;
        if(s[i]=='+') i++;
        else if(s[i]=='-'){
            sign=-1;
            i++;
        } 
        long long res=0;
        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';
            res=res*10+digit;
            if(res*sign<=INT_MIN) return INT_MIN;
            if(res*sign>=INT_MAX) return INT_MAX;
            i++;
        }
        return res*sign;
    }
};