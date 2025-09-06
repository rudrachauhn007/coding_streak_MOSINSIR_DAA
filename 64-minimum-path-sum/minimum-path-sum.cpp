// shree ganeshaya namaha:|
// shree chaumdamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int minPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> dp (n,vector<int>(m,0));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (i==0 && j==0)
                {
                    dp[i][j]=matrix[i][j];
                    continue;
                }
                int up=matrix[i][j];
                if (i-1>=0) up += dp[i-1][j];
                else up += (1e9);
                int left = matrix[i][j];
                if (j-1>=0) left += dp[i][j-1];
                else
                left += (1e9);

                dp[i][j] = min(up,left);
            }
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
        return dp[n-1][m-1];
    }
};