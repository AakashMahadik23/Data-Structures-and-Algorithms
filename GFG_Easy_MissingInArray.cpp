class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        int n = arr.size() + 1;
         long long totalSum = static_cast<long long>(n) * (n + 1) / 2;
        int arraySum = 0;
        
        for(int num:arr){
            arraySum += num;
        }
        return static_cast<int>(totalSum - arraySum);
    }
};
