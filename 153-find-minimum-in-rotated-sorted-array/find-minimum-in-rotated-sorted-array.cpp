class Solution {
public:
    int findMin(vector<int>& nums) {
        
        // Binary search
        int start = 0;
        int end = nums.size()-1;
        int mid;

        // If array is not rotated
        if(nums[start] <= nums[end])
            return nums[start];

        while(start < end)
        {
            // calculate mid
            mid = start + (end - start)/2;


            if(nums[mid] >= nums[0])
                start = mid + 1;

            else
                end = mid;

        }

        return nums[start];
    }
};