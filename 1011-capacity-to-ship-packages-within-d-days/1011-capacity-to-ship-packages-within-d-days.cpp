class Solution {
public:
    bool isItpossible(vector<int>& weights, int days, int mid){
        int day=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum=sum+weights[i];
            }
            else{
                day++;
                sum=weights[i];
            }
            if(day>days) return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=INT_MIN;
        int sum=0;
        int ans=0;
        for(int i=0;i<weights.size();i++){
            maxi=max(maxi,weights[i]);
            sum=sum+weights[i];
        }
        int low=maxi;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isItpossible(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};