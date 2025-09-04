// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
bool safe (int row,int col,int m,int n)
{
    return (row >=0 &&row <m && col>=0 && col <n);
}
int solve (int row,int col,int m,int n,vector<vector<int>>& dp)
{
     if (!safe(row,col,m,n)) return 0;

     if (row == m-1 && col==n-1) return 1;

     if (dp[row][col]!=-1) return dp[row][col];

     int right = solve(row,col+1,m,n,dp);
     int down= solve(row+1,col,m,n,dp);

     return dp[row][col]= right+down;
}
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

        int ans= solve(0,0,m,n,dp);
        return ans;
        
    }
};