class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
       int minElement = INT_MAX;
    int maxElement = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return {minElement, maxElement};
    }
};