class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        
        int result =0;
        int n = arr.size();
        
        for(int i =0; i<n; i++)
        {
            /*int temp = 0;
            for(int j =i; j<n; j++)
            {
                temp += arr[j];
                result+= temp;
            }*/
            
            result += (arr[i] * (i+1)*(n-i));
        }
        
        return result;
    }
};