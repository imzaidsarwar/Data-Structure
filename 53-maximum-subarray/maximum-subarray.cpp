class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // max sum
        int maxSum = nums[0];

        // current sum
        int currSum = nums[0];

        // Iterate the loop
        for(int i = 1; i< nums.size(); i++)
        {
            // Update current sum
            currSum = max(nums[i], currSum + nums[i]);

            // update maximum sum
            maxSum = max(currSum, maxSum);
        }

        // return sum of largest sub array
        return maxSum;
    }
};