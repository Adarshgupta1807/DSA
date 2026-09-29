class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        vector<int> left(n);
        vector<int> right(n);
        int maxl=height[0];
        for(int i=0;i<n;i++){
            maxl=max(maxl,height[i]);
            left[i]=maxl;
        }
        int maxr=height[n-1];
        for(int i=n-1;i>=0;i--){
            maxr=max(maxr,height[i]);
            right[i]=maxr;
        }
        for(int i=0;i<n;i++){
            int temp=min(left[i],right[i]);
            ans=ans+(temp-height[i]);
        }
        return ans;
    }
};