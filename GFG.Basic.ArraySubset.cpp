class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_set<int> setA(a.begin(), a.end());
        
        for(int num : b){
            if (setA.find(num) == setA.end()){
                return false;
            }
        }
        return true;
    }
};