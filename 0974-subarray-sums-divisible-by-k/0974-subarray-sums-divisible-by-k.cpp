class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int> prefixmap;
        prefixmap[0]=1;
        int prefixsum=0;
        for(int num:nums){
            prefixsum+=num;
            int rem=prefixsum%k;
            if (rem < 0) { // adjust neagative remainder to positive
                rem += k;
            }
            if(prefixmap.find(rem)!=prefixmap.end()){
                count+=prefixmap[rem];
                prefixmap[rem]+=1;
            }
            else{
                prefixmap[rem]=1;
            }
        }
        return count;
    }
};