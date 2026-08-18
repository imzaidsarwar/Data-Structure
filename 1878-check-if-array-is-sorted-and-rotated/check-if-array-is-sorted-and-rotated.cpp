class Solution {
public:
    bool check(vector<int>& nums) {

        int numsSize = nums.size();
        int cnt = 0;
        for(int i = 0; i< numsSize; i++)
        {
            
            if(nums[i] > nums[(i+1)% numsSize])
            {
               cnt++;
            }
        }

        if(cnt <= 1) {
            return true;
        }

        return false;
    }
};