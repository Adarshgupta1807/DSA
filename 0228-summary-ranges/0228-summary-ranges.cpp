class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string> ans;
        if(n==0) return ans;
        int start=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]!=nums[j-1]+1){
                if(start == nums[j-1]){
                    ans.push_back(to_string(start));
                }
                else{
                    ans.push_back(to_string(start) + "->" + to_string(nums[j-1]));
                }
                start=nums[j];
            }
        }
        if (start == nums[n-1]) {
            ans.push_back(to_string(start));
        } else {
            ans.push_back(to_string(start) + "->" + to_string(nums[n-1]));
        }
        return ans;
    }
};