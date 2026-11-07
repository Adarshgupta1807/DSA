class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int a=n/2; // C++ me jab int divide int hota hai toh result bhi int me aata hai (. ke aage ka part hat jaata hai)
        int count=0;
        int candidate=0;
        for(int num:nums){
            if(count==0){
                candidate=num;
                //count++;
            }
            if(num==candidate) count++;
            else count--;
        }
        return candidate;
    }
};