// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
bool safe (int row,int col,int m,int n)
{
    return (row>=0 && col>=0 && row<m && col < n);
}
int solve (int row,int col,vector<vector<int>>& grid , vector<vector<int>>&dp)
{
    int n=grid.size();
    int m=grid[0].size();
    if (!safe(row,col,n,m)) return 1e9+10;

    if (row== n-1 && col==m-1) return grid[row][col];

    if (dp[row][col]!=-1) return dp[row][col];

    int right = grid[row][col] + solve(row,col+1,grid,dp);
    int down = grid[row][col] + solve (row+1,col,grid,dp);

    return dp[row][col] = min(right,down);
}
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m+1,-1));
        int ans= solve(0,0,grid,dp);

        return ans;
        
    }
};