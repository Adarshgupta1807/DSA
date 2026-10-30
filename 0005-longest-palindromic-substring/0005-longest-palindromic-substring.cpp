class Solution {
public:
    bool isPalindrome(string &s, int l, int r){
        int left = l;          // fix: pehle 0 tha
        int right = r;
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0, maxLen = 1;

        for(int l = 0; l < n; l++){
            for(int r = l; r < n; r++){
                if(isPalindrome(s, l, r) && r - l + 1 > maxLen){
                    maxLen = r - l + 1;
                    start = l;
                }
            }
        }
        return s.substr(start, maxLen);
    }
};