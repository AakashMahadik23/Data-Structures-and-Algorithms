class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
         unordered_set<int> elements(arr, arr + n); 
       for (int x = A; x <= B; ++x) {
        if (elements.find(x) == elements.end()) {
            return false; 
        }
    }
    return true; 
    }
};
