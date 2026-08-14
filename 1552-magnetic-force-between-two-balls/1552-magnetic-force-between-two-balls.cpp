class Solution {
public:       
    bool isItpossible(vector<int>&arr,int mid,int m){
            int c=1;
            int pos=arr[0];
            for(int i=1;i<arr.size();i++){
                if(arr[i]-pos>=mid){
                    c++;
                    pos=arr[i];
                }
                if(c==m) return true;
            }
            return false;
    }
        
    int maxDistance(vector<int> &arr, int m) {
        // code here
        sort(arr.begin(),arr.end());
        int low=1;
        int high=arr[arr.size()-1]-arr[0];
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isItpossible(arr,mid,m)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};