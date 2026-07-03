class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen=INT_MAX;
        int left=0;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            while(sum>=target){
                minlen=min(minlen,i-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        if(minlen==INT_MAX) return 0;
        else return minlen;
    }
};