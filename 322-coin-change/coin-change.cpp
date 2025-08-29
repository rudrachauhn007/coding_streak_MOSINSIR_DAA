// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    const int infinity = 1e9;

    int rec(int index, vector<int>& coin, vector<vector<int>>& dp, int target) {
        if (index == coin.size()) {
            if (target == 0) return 0;
            return infinity;
        }

        if (dp[index][target] != -1) {
            return dp[index][target];
        }

        int take = infinity, nottake = infinity;
        if (target >= coin[index]) {
            take = 1 + rec(index, coin, dp, target - coin[index]);
        }
        nottake = rec(index + 1, coin, dp, target);

        return dp[index][target] = min(take, nottake);
    }

    int coinChange(vector<int>& coins, int amount) {
        if (coins.empty()) return -1;

        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
        int ans = rec(0, coins, dp, amount);

        if (ans >= infinity) return -1;
        return ans;
    }
};
