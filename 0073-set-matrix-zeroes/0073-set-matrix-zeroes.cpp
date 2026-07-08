class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> k;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    k.push_back({i,j});
                }
            }
        }
        for(int i=0;i<k.size();i++){
            int x=k[i].first;
            int y=k[i].second;
            for(int p=0;p<m;p++){
                matrix[p][y]=0;
            }
            for(int p=0;p<n;p++){
                matrix[x][p]=0;
            }
        }
    }
};