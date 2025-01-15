class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
         int n = arr.size();
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is a peak
        bool leftCheck = (mid == 0 || arr[mid] > arr[mid - 1]);
        bool rightCheck = (mid == n - 1 || arr[mid] > arr[mid + 1]);

        if (leftCheck && rightCheck) {
            return mid; // Found a peak
        }
        // Move to the side with a higher value
        if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // This should not be reached
    }
};