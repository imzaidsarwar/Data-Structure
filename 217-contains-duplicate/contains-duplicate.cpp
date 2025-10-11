class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int size = nums.size();

        sort(nums.begin(), nums.end());
        // Itreate the array
        for(int i = 0x00; i< size-1; i++)
        {
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
    }
    
};