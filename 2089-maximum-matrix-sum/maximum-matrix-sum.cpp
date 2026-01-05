class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        long long mini = INT_MAX;
        int cnt = 0;
        for (auto it : matrix) {
            for (auto itt : it) {
                sum += abs(itt);
                if (itt < 0) {
                    cnt++;
                }
                mini = min(mini, llabs(0ll + itt));
            }
        }

        return cnt % 2 == 0 ? sum : sum - 1ll * 2 * (mini);
    }
};