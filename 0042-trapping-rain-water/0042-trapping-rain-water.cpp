class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        int maxl=height[0];
        for(int i=0;i<height.size();i++){
            maxl=max(maxl,height[i]);
            left[i]=maxl;
        }
        vector<int> right(n);
        int maxr=height[n-1];
        for(int i=n-1;i>=0;i--){
            maxr=max(maxr,height[i]);
            right[i]=maxr;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            int temp=min(right[i],left[i]);
            int t=temp-height[i];
            sum=sum+t;
        }
        return sum;
    }
};