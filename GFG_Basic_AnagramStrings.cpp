class Solution {
    public:
      int areAnagram(string S1, string S2) {
          // code here
           if (S1.length() != S2.length()) {
              return 0;
          }
          int count[26] = {0};  
          for (int i = 0; i < S1.length(); i++) {
              count[S1[i] - 'a']++;
          }
          for (int i = 0; i < S2.length(); i++) {
              count[S2[i] - 'a']--;
              if (count[S2[i] - 'a'] < 0) {
                  return 0;
              }
          }
          return 1;
      }
  };