class Solution {
    public:
      // Function to search a given number in row-column sorted matrix.
      bool searchMatrix(vector<vector<int>> &mat, int x) {
          // code here
          int n = mat.size();        // Number of rows
          int m = mat[0].size();     // Number of columns
          
          int row = 0, col = m - 1;  // Start from top-right corner
          
          while (row < n && col >= 0) {
              if (mat[row][col] == x) return true;  // Found the element
              else if (mat[row][col] > x) col--;    // Move left
              else row++;                           // Move down
          }
          
          return false;  // Element not found
      }
  };
  