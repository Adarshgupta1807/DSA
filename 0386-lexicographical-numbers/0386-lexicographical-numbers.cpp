class Solution {
public:
    vector<int> ans;
    void solve(int i,int n){
        if(i>n) return;
        ans.push_back(i);
        if(i*10<=n){
            for(int j=0;j<=9;j++){
                solve(i*10+j,n);
            }
        }
    }
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<=9;i++){
            solve(i,n);
        }
        return ans;
    }
};