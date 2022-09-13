class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int j;
        for (int i = 0; i < nums.size() - 1 ; i++) {
            j = 0;
            for (j = j + 1; j < nums.size(); j++) {
                if (ans.size() == 2) break;
                if ( nums[i] + nums[j] == target && i != j) {
                    ans.push_back(i); 
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};