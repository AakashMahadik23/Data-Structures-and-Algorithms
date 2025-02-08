class Solution {
    public:
      void reverseInGroups(vector<int> &arr, int k) {
          // code here
            int n = arr.size();
      for (int i = 0; i < n; i += k) {
          // Reverse sub-array from index i to min(i + k - 1, n - 1)
          int left = i, right = min(i + k - 1, n - 1);
          while (left < right) {
              swap(arr[left], arr[right]);
              left++;
              right--;
          }
      }
      }
  };