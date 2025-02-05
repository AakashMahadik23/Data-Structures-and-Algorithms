class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map<int, int> firstOccurence;
        int minIndex = INT_MAX;
        
        for(int i=0; i<arr.size(); i++){
            if(firstOccurence.find(arr[i]) != firstOccurence.end()){
                minIndex = min(minIndex, firstOccurence[arr[i]]);
            }else{
                firstOccurence[arr[i]] = i;
            }
        }
        return (minIndex == INT_MAX) ? -1 : minIndex + 1;
    }
};