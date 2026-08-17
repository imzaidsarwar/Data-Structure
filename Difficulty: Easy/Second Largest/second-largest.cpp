class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        if(arr.size()<= 1)
        {
            return -1;
        }
        
        int maxi = arr[0];
        int secondMax = -1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxi) {
                secondMax = maxi;
                maxi = arr[i];
            }
            else if (arr[i] > secondMax && arr[i] != maxi) {
                secondMax = arr[i];
            }
        }
        return secondMax;
    }
};