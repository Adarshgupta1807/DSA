class Solution {
public:
    bool IsItPossible(vector<int>& piles, int mid, int h){
            long long sum=0;
            for(int i=0;i<piles.size();i++){
                sum+=(long long)ceil((double)piles[i] / mid);
            }
            if(sum<=h) return true;
            else return false;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int low=1;
        int high=(long long)piles[piles.size()-1];
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(IsItPossible(piles,mid,h)){
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