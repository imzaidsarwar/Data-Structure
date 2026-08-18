class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int>temp;
        int numSize = nums.size();
        k = k%nums.size();
        
        for(int i= k; i>0; i--) {
            temp.push_back(nums[numSize-i]);
        }

        for(int i =0; i< (numSize-k); i++)
        {
            temp.push_back(nums[i]);
        };

        nums = temp;
    }
};