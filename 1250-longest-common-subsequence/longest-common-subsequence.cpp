// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
int recc (int i,int j,string& s1,string& s2,vector<vector<int>>&dp)
{
    if (i <0 || j<0)
    {
        return 0;
    }

    if (dp[i][j]!=-1) return dp[i][j];

    if (s1[i]==s2[j]) return dp[i][j]=1+recc(i-1,j-1,s1,s2,dp);

    return dp[i][j]=max(recc(i-1,j,s1,s2,dp),recc(i,j-1,s1,s2,dp));
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for (int i=0;i<=m;i++) dp[0][i]=0;
        for (int j=0;j<=n;j++) dp[j][0]=0;

        for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++)
            {
                if (text1[i-1]==text2[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];

        
    }
};