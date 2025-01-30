class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int count =0;
        for(int num:arr){
            if(num == 0){
                count ++;
            }
        }
          return count;
    }
};