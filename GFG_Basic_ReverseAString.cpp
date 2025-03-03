class Solution {
    public:
      string reverseString(string& s) {
          // code here
          int n = s.length();
          int st = 0, end = n -1 ;
          while(st<end){
              swap(s[st], s[end]);
              st++;
              end--;
          }
          return s;
      }
  };