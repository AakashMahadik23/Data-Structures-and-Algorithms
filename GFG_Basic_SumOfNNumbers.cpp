class Solution {
  public:
    int seriesSum(int n) {
        // code here
        int sum;
        if(n==0){
            return 0;
        }
       while(n>0){
           sum =( n * (n+1))/2;
           return sum;
       }
    }
};
