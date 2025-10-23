class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // sort(nums.begin(), nums.end());
        // int size = nums.size();
        // vector<vector<int>>triplets;
        // set<vector<int>> s;
        
        // for(int i = 0; i<size; i++)
        // {
        //     for(int j = i+1; j< size; j++)
        //     {
        //         for(int k = j+1; k< size; k++)
        //         {
        //             vector<int>temp;
        //             if(0 == (nums[i] + nums[j] + nums[k]))
        //             {
        //                 temp.push_back(nums[i]);
        //                 temp.push_back(nums[j]);
        //                 temp.push_back(nums[k]);
        //                 s.insert(temp);
        //             }
        //         }
        //     }
        // }

        // for(auto allTriplets : s)
        //     triplets.push_back(allTriplets);

        // return triplets;

            // OPTIMAL APPROACH

    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    int n = nums.size();
    for(int i = 0; i < n; i++) {
        if(i >0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;

        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];

            if(sum > 0) {
                k--;

            }
            else if(sum < 0) {
                j++;

            }
            else{
                vector<int> temp = {nums[i] , nums[j] , nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j < k && nums[j] == nums[j - 1]) j++;
                while(j < k && nums[k] == nums[k + 1]) k--;

            }
        }

    }

    return ans;

    }
};