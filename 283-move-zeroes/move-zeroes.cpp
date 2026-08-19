class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> tempVec;
        int zerosCnt = 0x00;

        for(int i =0; i< nums.size(); i++) 
        {
            if(0x00 == nums[i])
            {
                zerosCnt++;
            }
            else 
            {
                tempVec.push_back(nums[i]);
            }
        }

        for(int i=0; i<zerosCnt; i++)
        {
            tempVec.push_back(0x00);
        }

        nums = tempVec;
    }
};