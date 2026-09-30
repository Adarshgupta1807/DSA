class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // optimisation is for skipping duplicates
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue; // 1st optimisation
            for(int j=i+1;j<n;){
                int p=j+1;
                int q=n-1;
                while(p<q){
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[p]+(long long)nums[q];
                    if(sum>target) q--;
                    else if(sum<target) p++;
                    else{
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;
                        q--;
                        while(p<q && nums[p]==nums[p-1]) p++; // 3rd optimisation
                        while(p<q && nums[q]==nums[q+1]) q--; // 4th optimisation 
                    } 
                }
                j++;
                while(j<n && nums[j]==nums[j-1]) j++; // 2nd optimisation
            }
        }
        return ans;
    }
};