class Solution {
public:
    string minWindow(string s, string t) {
        int n = t.length();
        if (n > s.length()) return "";
        
        unordered_map<char,int> mp;
        for (char ch : t) mp[ch]++;
        
        int i = 0, j = 0;
        int minwindowsize = INT_MAX;
        int start_i = 0;
        int requiredcount = n;
        
        while (j < s.length()) {
            char ch = s[j];
            mp[ch]--;                      // unconditional decrement
            if (mp[ch] >= 0) requiredcount--;   // sirf tab count jab genuinely needed tha
            
            while (requiredcount == 0) {
                int currentwindowsize = j - i + 1;
                if (minwindowsize > currentwindowsize) {
                    minwindowsize = currentwindowsize;
                    start_i = i;
                }
                mp[s[i]]++;                     // unconditional increment
                if (mp[s[i]] > 0) requiredcount++;   // symmetric check
                i++;
            }
            j++;
        }
        
        if (minwindowsize == INT_MAX) return "";
        return s.substr(start_i, minwindowsize);
    }
};