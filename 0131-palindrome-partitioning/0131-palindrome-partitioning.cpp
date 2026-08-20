class Solution {
public:
    bool isPalindrome(string &part){
        int i=0;
        int j=part.size()-1;
        while(i<=j){
            if(part[i]!=part[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void getallPartitions(string s,vector<string>& partitions,vector<vector<string>> &ans){
        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(isPalindrome(part)){
                partitions.push_back(part);
                getallPartitions(s.substr(i+1),partitions,ans);
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> partitions;
        vector<vector<string>> ans;
        getallPartitions(s,partitions,ans);
        return ans;
    }
};