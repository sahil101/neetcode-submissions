class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_n = matrix.size();
        int col_m = matrix[0].size();

        int top = 0, bot = row_n - 1;
        while (top <= bot) {
            int mid = (top + bot) >> 1;
            if (target > matrix[mid][col_m - 1]){
                top = mid + 1;
            } else if (target < matrix[mid][0]) {
                bot = mid - 1;
            } else {
                break;
            }
        }

        if (!(top <= bot)) {
            return false;
        }

        int row = (top + bot) / 2;
        int l = 0, r = col_m - 1;
        while(l <= r) {
            int m = (l + r) / 2;
            if (target > matrix[row][m]){
                l = m + 1;
            } else if (target < matrix[row][m]) {
                r = m - 1;
            } else {
                return true;
            }
        }

        return false;
    }
};
