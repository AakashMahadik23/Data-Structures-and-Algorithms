class Solution {
 public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int> freqMap;
        vector<int> result;
        
        for(int num : arr){
            freqMap[num]++;
        }
        
        for (auto& entry : freqMap) {
            if(entry.second > 1){
                result.push_back(entry.first);
            }
        }
        return result;
    }
};