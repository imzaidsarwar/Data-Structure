class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& arr) {
        // code here
        
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        for(int i = 2; i<n; i = i+2)
        {
            int temp = arr[i];
            
            arr[i] = arr[i-1];
            
            arr[i-1] = temp;
        }
        
        return arr;
        
    }
};