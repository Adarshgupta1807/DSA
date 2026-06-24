class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        int maxl=height[0];
        for(int i=0;i<n;i++){
            maxl=max(height[i],maxl);
            left[i]=maxl;
        }
        vector<int> right(n);
        int maxr=height[n-1];
        for(int i=n-1;i>=0;i--){
            maxr=max(height[i],maxr);
            right[i]=maxr;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int temp=min(left[i],right[i]);
            int t=temp-height[i];
            sum=sum+t;
        }
        return sum;
    }
};