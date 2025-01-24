class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        int oddCount = 0, evenCount = 0;
        for(num:arr){
            if(num % 2 == 0){
                evenCount ++;
            }else{
                oddCount ++;
            }
        }
        return {oddCount, evenCount};
    }