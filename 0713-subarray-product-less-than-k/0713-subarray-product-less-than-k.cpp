class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //int n=nums.size();
        int count=0;
        int i=0;
        int j=0;
        int prod=1;
        while(j<nums.size()){
            prod=prod*nums[j];
            while(prod>=k && i<=j){
                prod=prod/nums[i];
                i++;
            }
            count=count+(j-i+1);
            j++;
        }
        return count;
    }
};