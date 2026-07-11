class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> minrow(row);
        for(int i=0;i<row;i++){
            int rowmin=INT_MAX;
            for(int j=0;j<col;j++){
                rowmin=min(rowmin,matrix[i][j]);
            }
            minrow[i]=rowmin;
        }
        vector<int> maxcol(col);
        for(int i=0;i<col;i++){
            int colmax=INT_MIN;
            for(int j=0;j<row;j++){
                colmax=max(colmax,matrix[j][i]);
            }
            maxcol[i]=colmax;
        }
        vector<int> ans;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if((matrix[i][j]==minrow[i]) && (matrix[i][j]==maxcol[j])){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};