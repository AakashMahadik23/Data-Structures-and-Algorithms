  class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        int start = 0, currSum = 0;
        for(int end  = 0 ; end < n; end ++){
            currSum += arr[end];
            while( currSum > target && start <= end){
                currSum -= arr[start];
                start++;
            }
            if(currSum == target){
                return{start+1, end+1};
            }
        }
        return{-1};
    }
  };