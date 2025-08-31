class Solution {
public:
    int getLeastFrequentDigit(int n) {
        map<int, int> mp;

        int ans_frq = INT_MAX;
        int ans = 0;

        string num = to_string(n);

        for (auto it : num) {
            mp[it - '0']++;
        }

        for (auto it : mp) {
            if (it.second < ans_frq) {
                ans = it.first;
                ans_frq = it.second;
            } else if (it.second == ans_frq) {
                ans = min(ans, it.first);
            }
        }

        return ans;
    }
};