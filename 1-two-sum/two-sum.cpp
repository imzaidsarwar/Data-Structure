class Solution {
public:
    int findElement(vector<int>& nums, int target, int searchPoint)
    {
        for(int i = searchPoint; i< nums.size(); i++)
        {
            if(target == nums[i])
                return i;
            
        }

        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        // for (int ind = 0x00; ind < nums.size(); ind++) {
        //     for (int ind2 = ind + 1; ind2 < nums.size(); ind2++) {
        //         if (target == (nums[ind] + nums[ind2])) {
        //             result.push_back(ind);
        //             result.push_back(ind2);
        //         }
        //     }
        // }

        // Sort the array
        //sort(nums.begin(), nums.end());
        // int start = 0x00;
        // int end = nums.size()-1;
        // for(int ind = 0x00; ind < nums.size(); ind++)
        // {
        //     if(target > (nums[start] + nums[end]))
        //         start++;
        //     else if(target < (nums[start] + nums[end]))
        //         end--;
        //     else if(target == (nums[start] + nums[end]))
        //     {
        //         result.push_back(start);
        //         result.push_back(end);
        //         break;
        //     }
            
        // }

        for(int i =0x00; i< nums.size(); i++)
        {
            int index = findElement(nums, target - nums[i], i+1);
            if(-1 != index)
            {
                result.push_back(i);
                result.push_back(index);
                break;
            }
        }

        return result;
    }
};