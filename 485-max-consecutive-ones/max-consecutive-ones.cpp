class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int oneCnt = 0;
        int maxOneCnt = 0;

        for(int i=0; i<nums.size();i++)
        {
            if(nums[i] == 1)
            {
                oneCnt++;
            }
            else
            {
                maxOneCnt = max(maxOneCnt, oneCnt);
                oneCnt = 0;
            }
        }

        return max(maxOneCnt, oneCnt);
    }
};