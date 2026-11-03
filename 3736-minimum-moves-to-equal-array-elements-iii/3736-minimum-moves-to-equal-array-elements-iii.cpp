class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=(maxi-nums[i]);
        }
        return count;
    }
};