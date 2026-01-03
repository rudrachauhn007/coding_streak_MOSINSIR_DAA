// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
      int mod=1e9+7;
      int dp[5000][4][4][4];
      long long solve(int row,int n,int c1,int c2,int c3)
      {
        if (row>=n)
        {
            return 1;
        }
        long long ans=0;
        if(dp[row][c1][c2][c3]!=-1)
        {
            return dp[row][c1][c2][c3];
        }
        for (int i=0;i<3;i++)
        {
            if (i!= c1)
            {
                for (int j=0;j<3;j++)
                {
                    if (j!=i&& j!=c2)
                    {
                        for (int k=0;k<3;k++)
                        {
                            if(k!=j && k!=c3)
                            {
                                ans += solve(row+1,n,i,j,k);
                            }
                        }
                    }
                }
            }
        }
        return dp[row][c1][c2][c3]= ans%mod;
      }
    int numOfWays(int n) {
        memset(dp,-1,sizeof(dp));

        return solve(0,n,3,3,3);
        
    }
};