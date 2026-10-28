class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int ans1=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                ans1=mid;
                right=mid-1;
            }
            else if(nums[mid]>target) right=mid-1;
            else left=mid+1;
        }
        int low=0;
        int high=n-1;
        int ans2=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans2=mid;
                low=mid+1;
            }
            else if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return {ans1,ans2};
    }
};