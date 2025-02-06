class Solution {
  public:
    // Function to swap elements of the array
    void swapElements(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        for (int i = 0; i + 2 < n; i++) {
            int temp = arr[i];
            arr[i] = arr[i + 2];
            arr[i + 2] = temp;
        }
    }
};