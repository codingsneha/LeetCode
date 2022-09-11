class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];

        int t = 0;
        for (int i = 0; i < nums.size(); i++){
            if (sum - (t + nums[i]) == t)
                return i;
            t += nums[i];
        }
        return -1;
    }
};