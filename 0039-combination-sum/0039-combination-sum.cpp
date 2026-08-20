class Solution {
public:
    set<vector<int>> s;
    void allCombination(vector<int>&candidates,vector<int> &comb,vector<vector<int>> &ans,int idx,int target){
        if(target==0){
            if(s.find(comb)==s.end()){
                ans.push_back({comb});
                s.insert(comb);
            }
        }
        if(idx==candidates.size() || target<0) return;
        
        comb.push_back(candidates[idx]);
        allCombination(candidates,comb,ans,idx+1,target-candidates[idx]);
        allCombination(candidates,comb,ans,idx,target-candidates[idx]);
        comb.pop_back();
        allCombination(candidates,comb,ans,idx+1,target);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        allCombination(candidates,comb,ans,0,target);
        return ans;
    }
};