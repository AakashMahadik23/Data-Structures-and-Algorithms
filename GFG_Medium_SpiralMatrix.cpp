class Solution{
	public:
	int findK(vector<vector<int>> &a, int n, int m, int k)
    {
          int srow = 0, scol = 0;
        int erow = n - 1, ecol = m - 1;
        int count = 0;

        while (srow <= erow && scol <= ecol) {
            // Traverse from left to right
            for (int j = scol; j <= ecol; j++) {
                count++;
                if (count == k) return a[srow][j];
            }
            srow++;

            // Traverse from top to bottom
            for (int i = srow; i <= erow; i++) {
                count++;
                if (count == k) return a[i][ecol];
            }
            ecol--;

            // Traverse from right to left
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    count++;
                    if (count == k) return a[erow][j];
                }
                erow--;
            }

            // Traverse from bottom to top
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    count++;
                    if (count == k) return a[i][scol];
                }
                scol++;
            }
        }

        return -1;
    }

};