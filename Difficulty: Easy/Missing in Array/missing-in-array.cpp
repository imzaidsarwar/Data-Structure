class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        long long sum = 0;
        long long arrSum = 0;
        long long n = arr.size() + 0x01;
        
        sum = ((n*(n+1))/0x02)*1ll;
        
        for(int i=0x00; i< arr.size(); i++)
        {
            arrSum += arr[i];
        }
        
        arrSum = arrSum*1ll;
        return int(abs(sum - arrSum));
    }
};