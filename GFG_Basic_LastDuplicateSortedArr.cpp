class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        // code here
        int n = arr.size();
        int lastindex = -1, lastvalue = -1;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[i-1]){
                lastvalue = arr[i];
                lastindex = i;
            }
        }
        return { lastindex, lastvalue };
    }
};