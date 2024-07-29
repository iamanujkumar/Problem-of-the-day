class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& arr) {
        int rows = arr.size();
        if (rows == 0) return -1;
        int cols = arr[0].size();
        if (cols == 0) return -1;
        
        int maxRowIndex = 0;
        int maxCount = 0;
        
        int row = 0;
        int col = cols - 1;
        
        while (row < rows && col >= 0) {
            if (arr[row][col] == 1) {
                int count = cols - col;
                if (count > maxCount) {
                    maxCount = count;
                    maxRowIndex = row;
                }
                col--;
            } else {
                row++;
            }
        }
        
        return maxCount > 0 ? maxRowIndex : -1;
    }
};