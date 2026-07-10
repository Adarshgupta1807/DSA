class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int k;
        int diagonals=row+col-1;
        vector<int> result;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                k=i+j;
                mp[k].push_back(mat[i][j]);
            }
        }
        for(int i=0;i<diagonals;i++){
            if(i%2==0){
                for(int l=mp[i].size()-1;l>=0;l--){
                    result.push_back(mp[i][l]);
                }
            }
            else{
                for(int j=0;j<mp[i].size();j++){
                    result.push_back(mp[i][j]);
                }
            }
        }
        return result;
    }
};