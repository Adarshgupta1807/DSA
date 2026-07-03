class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int> arr;
        for(auto i=mpp.begin();i!=mpp.end();i++){
            arr.push_back(i->first);  
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n<=2){
            return arr[n-1];
        }
        else{
            return arr[n-3];
        }
    }
};