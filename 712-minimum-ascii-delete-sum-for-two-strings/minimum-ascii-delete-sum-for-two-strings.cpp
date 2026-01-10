// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (s1[i]==s2[j])
                {
                    dp[i+1][j+1]=dp[i][j]+s1[i];
                }
                else
                dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
            }
        }
        int total=0;
        for (auto it : s1) total += it;
        for (auto it : s2) total += it;

        return total-2*dp[n][m];
        
    }
};