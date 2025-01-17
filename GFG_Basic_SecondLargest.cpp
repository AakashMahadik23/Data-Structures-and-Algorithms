class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here 
       int largest = INT_MIN;    // Stores the largest element
        int secondLargest = INT_MIN; // Stores the second largest element
        
        // Traverse the array to find the largest and second largest elements
        for (int num : arr) {
            if (num > largest) {
                secondLargest = largest;
                largest = num;
            } else if (num > secondLargest && num != largest) {
                secondLargest = num;
            }
        }
        
        // If no valid second largest element exists, return -1
        return (secondLargest == INT_MIN) ? -1 : secondLargest;
    }
};