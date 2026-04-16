class Solution {
public:
    int solve(vector<int>& a, int k) {
        int n = a.size();

        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {

                // không chọn i-1
                dp[i][j] = dp[i - 1][j];

                // chọn i-1
                if (i >= 2) {
                    dp[i][j] = max(
                        dp[i][j],
                        dp[i - 2][j - 1] + a[i - 1]
                    );
                } else {
                    if (j == 1) {
                        dp[i][j] = max(dp[i][j], a[i - 1]);
                    }
                }
            }
        }

        return dp[n][k];
    }

    int maxSizeSlices(vector<int>& slices) {
        int n = slices.size();
        int k = n / 3;

        // case 1: bỏ phần tử cuối
        vector<int> case1(slices.begin(), slices.end() - 1);

        // case 2: bỏ phần tử đầu
        vector<int> case2(slices.begin() + 1, slices.end());

        return max(solve(case1, k), solve(case2, k));
    }
};