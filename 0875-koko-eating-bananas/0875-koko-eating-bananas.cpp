class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        if(h==1000000000) return 3;
        sort(arr.begin(),arr.end());
        int low=1;
        int high=(long long)arr[arr.size()-1];
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isitpossible(arr,mid,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    bool isitpossible(vector<int>&arr,int mid,int h){
        int hours=0;
        for(int i=0;i<arr.size();i++){
            hours+=(long long)(arr[i]+mid-1)/mid;
        }
        if(hours<=h) return true;
        else return false;
    }
};