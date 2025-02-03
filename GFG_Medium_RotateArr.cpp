class Solution {
  public:
  
  void reverseArray(vector<int>& arr, int start, int end) {
        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        if (n == 0) return; // Edge case: empty array
        d = d % n; // If d > n, take modulo

        // Step 1: Reverse the first d elements
        reverseArray(arr, 0, d - 1);

        // Step 2: Reverse the remaining elements
        reverseArray(arr, d, n - 1);

        // Step 3: Reverse the whole array
        reverseArray(arr, 0, n - 1);
    }
};