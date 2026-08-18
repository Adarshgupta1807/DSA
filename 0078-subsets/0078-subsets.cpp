class Solution {
public:
    void allsubsets(vector<int>& nums, vector<int>& current, vector<vector<int>>& result, int i){
        if(i == nums.size()){
            result.push_back(current);   // poora subset result mein daal do
            return;
        }
        // include
        current.push_back(nums[i]);
        allsubsets(nums, current, result, i+1);
        current.pop_back();

        // exclude
        allsubsets(nums, current, result, i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        allsubsets(nums, current, result, 0);
        return result;
    }
};