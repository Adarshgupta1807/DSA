class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low=0;
        int high=(row*col)-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int row_index=mid/col;
            int col_index=mid%col;
            if(matrix[row_index][col_index]==target){
                return true;
            }
            else if(matrix[row_index][col_index]>target){
                high=mid-1;;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};