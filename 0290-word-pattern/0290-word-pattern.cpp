class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mpp1;
        unordered_map<string,char> mpp2;
        int n=pattern.length();
        vector<string> words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        if(words.size()!=n) return false;
        for(int i=0;i<n;i++){
            char ch1=pattern[i];
            string ch2=words[i];
            if((mpp1.find(ch1)!=mpp1.end() && mpp1[ch1]!=ch2) || (mpp2.find(ch2)!=mpp2.end() && mpp2[ch2]!=ch1) ){
                return false;
            }
            mpp1[ch1]=ch2;
            mpp2[ch2]=ch1;
        }
        return true;
    }
};