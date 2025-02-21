class Solution {
    public:
      int countFreq(vector<int>& arr, int target) {
          // code here
        auto lower = lower_bound(arr.begin(), arr.end(), target);
      // Get the position just after the last occurrence
      auto upper = upper_bound(arr.begin(), arr.end(), target);
      
      // Difference gives the number of occurrences
      return upper - lower;
      }
  };