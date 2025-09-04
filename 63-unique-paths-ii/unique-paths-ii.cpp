// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
bool safe (int row,int col,vector<vector<int>>&grid)
{
    int n=grid.size();
    int m=grid[0].size();

    return (row>=0 && row<n && col>=0 && col<m && grid[row][col]!=1);
}
int solve (int row,int col,vector<vector<int>>&dp , vector<vector<int>>&grid)
{
    if (!safe(row,col,grid)) return 0;
    
    int n=grid.size();
    int m=grid[0].size();

    if (row==n-1 && col==m-1) return 1;

    if (dp[row][col]!=-1) return dp[row][col];

    int right= solve(row,col+1,dp,grid);
    int down = solve(row+1,col,dp,grid);

    return dp[row][col]=right+down;
}
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));

        int ans= solve(0,0,dp,grid);

        return ans;
        
    }
};