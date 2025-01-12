class Solution {
  public:
    // Just print the space seperated array elements
    void printArray(vector<int> &arr) {
        // code here
        bool first = true;  // Flag to track if it's the first element
        for (int val : arr) {
            if (!first) {
                cout << " ";  // Print space before the element if it's not the first element
            }
            cout << val;
            first = false;  // After the first element, set the flag to false
        }

    }
};