class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minrow=0;
        int mincolumn=0;
        int maxrow=matrix.size()-1;
        int maxcolumn=matrix[0].size()-1;
        int totalElements=matrix.size()*matrix[0].size();
        int count=0;
        vector<int> result;
        while(count<totalElements){
            // top row: left -> right
            for(int i=mincolumn;i<=maxcolumn && count<totalElements;i++){
                result.push_back(matrix[minrow][i]);
                count++;
            }
            minrow++;

            // right column: top -> bottom
            for(int i=minrow;i<=maxrow && count<totalElements;i++){
                result.push_back(matrix[i][maxcolumn]);
                count++;
            }
            maxcolumn--;

            // bottom row: right -> left
            for(int i=maxcolumn;i>=mincolumn && count<totalElements;i--){
                result.push_back(matrix[maxrow][i]);
                count++;
            }
            maxrow--;

            // left column: bottom -> top
            for(int i=maxrow;i>=minrow && count<totalElements;i--){
                result.push_back(matrix[i][mincolumn]);
                count++;
            }
            mincolumn++;
        }
        return result;
    }
};