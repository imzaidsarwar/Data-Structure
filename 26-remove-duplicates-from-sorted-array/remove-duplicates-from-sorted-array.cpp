class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        set<int> resultSet;
        
        for(int i =0; i< nums.size(); i++) {
            resultSet.insert(nums[i]);
        }

        vector<int> resultVec;
        resultVec.assign(resultSet.begin(), resultSet.end());
        nums = resultVec;
        return resultSet.size();
    }
};