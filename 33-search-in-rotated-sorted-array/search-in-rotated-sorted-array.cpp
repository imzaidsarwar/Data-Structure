class Solution {
public:
    int binarySearch(int startInd, int endInd, int target, vector<int>& nums)
    {
        int mid;
        int result = -1;
        while(startInd <= endInd)
        {
            mid = startInd + (endInd - startInd)/2;

            if(target > nums[mid])
                startInd = mid + 1;
            
            else if(target < nums[mid])
                endInd = mid - 1;

            else if(target == nums[mid])
                return mid;
            
        }

        return -1;
    }
    int search(vector<int>& nums, int target) {
        int endInd;
        int result;
        int siz = nums.size();
        // Search 
        for(int i = 0; i< siz-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                endInd = i;
                break;
            }
        }

        result = binarySearch(0, endInd, target, nums);
        if(-1 == result)
            result = binarySearch(endInd + 1, siz-1, target, nums);
        
        return result;
    }
};