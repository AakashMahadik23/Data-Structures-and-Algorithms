class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        if (n <= 2) return 0; // No water can be trapped with less than 3 blocks
        
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int waterTrapped = 0;
        
        while (left <= right) {
            if (leftMax <= rightMax) {
                // Process the left side
                if (arr[left] >= leftMax) {
                    leftMax = arr[left];
                } else {
                    waterTrapped += leftMax - arr[left];
                }
                left++;
            } else {
                // Process the right side
                if (arr[right] >= rightMax) {
                    rightMax = arr[right];
                } else {
                    waterTrapped += rightMax - arr[right];
                }
                right--;
            }
        }
        return waterTrapped;
    }
};