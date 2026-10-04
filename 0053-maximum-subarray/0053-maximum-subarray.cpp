class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            maxsum=max(maxsum,sum);
            if(sum<0){
                sum=0;
            }
            //maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};