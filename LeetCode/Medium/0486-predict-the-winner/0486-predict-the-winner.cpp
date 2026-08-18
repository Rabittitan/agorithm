class Solution {
    private:
        int memo[25][25];

        int helper(vector<int>& nums, int i, int j) {
        
            if (i == j) {
                return nums[i];
            }
        
            if (memo[i][j] != -1) {
                return memo[i][j];
            }


            int pickLeft = nums[i] - helper(nums, i + 1, j);
            int pickRight = nums[j] - helper(nums, i, j - 1);

        
            return memo[i][j] = max(pickLeft, pickRight);
        }

    public:
        bool predictTheWinner(vector<int>& nums) {
            int n = nums.size();
            memset(memo, -1, sizeof(memo));
        
            return helper(nums, 0, n - 1) >= 0;
        }
};