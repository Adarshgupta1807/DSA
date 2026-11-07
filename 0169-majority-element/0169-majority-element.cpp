class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int a=n/2; // C++ me jab int divide int hota hai toh result bhi int me aata hai (. ke aage ka part hat jaata hai)
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>a) return nums[i];
        }
        return -1;
    }
};