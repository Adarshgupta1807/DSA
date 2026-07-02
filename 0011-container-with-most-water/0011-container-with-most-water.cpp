class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int n=height.size();
        int j=n-1;
        int maxwater=0;
        while(i<j){
            int width=j-i;
            int h=min(height[i],height[j]);
            int area=width*h;
            maxwater=max(area,maxwater);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxwater;
    }
};