class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        
        int n = arr.size();
        unordered_set<int> s;
         
        for (int i = 0; i< n; i++)
        {
            if (s.find(arr[i]) != s.end())
                return true;

            // Add this item to hashset
            s.insert(arr[i]);
            
            // Maintain window size of k
            if (s.size() > k) {
                s.erase(arr[i - k]);
            }
        }
        
        
        
        return false;
    }
};