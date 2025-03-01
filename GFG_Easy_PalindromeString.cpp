class Solution {
    public:
      // Function to check if a string is a palindrome.
      bool isPalindrome(string& s) {
          // code here
          int n = s.length();
          int st = 0 , end = n - 1;
          while(st<end){
              if(s[st] != s[end]){
                  return false;
              }
               st++;
              end--;
          }
          return true;
      }
  };