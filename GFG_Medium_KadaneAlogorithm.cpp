class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int maxSum = INT_MIN;
        int currSum = 0;
        int n = arr.size();
        for(int i=0; i<n; i++){
            currSum += arr[i];
            maxSum = max(currSum, maxSum);
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};