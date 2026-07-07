class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int column=matrix[0].size();
        vector<vector<int>> result(column, vector<int>(rows));
        for(int i=0;i<result.size();i++){
            for(int j=0;j<result[0].size();j++){
                result[i][j]=matrix[j][i];
            }
        }
        return result;
    }
};