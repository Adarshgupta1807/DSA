class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int ans=-1;
    int n=arr.size();
    int naturalsum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
    }
    return naturalsum-sum;
    }
};