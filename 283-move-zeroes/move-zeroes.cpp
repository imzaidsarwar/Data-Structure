class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        /*vector<int> tempVec;
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

        nums = tempVec;*/
        int zerosCnt = 0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(0x00 == nums[i])
            {
                if(0x00 != nums[i+1]) 
                {
                    if(0x00 < zerosCnt)
                    {
                        int temp = nums[i- zerosCnt];
                        nums[i- zerosCnt] = nums[i+1];
                        nums[i+1] = temp;
                        //zerosCnt = 0x00;
                    }
                    else
                    {
                        int temp = nums[i+1];
                        nums[i+1] = nums[i];
                        nums[i] = temp;
                        zerosCnt = 0x00;
                    }
                    
                }
                else
                {
                    zerosCnt++;
                }
            }
        }
    }
};