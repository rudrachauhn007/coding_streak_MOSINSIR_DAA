// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
   void dfs (int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis)
   {
    int n=grid.size();
    int m=grid[0].size();
    vis[row][col]=1;
    vector<vector<int>> delta={{1,0},{0,1},{-1,0},{0,-1}};
    for (int i=0;i<4;i++)
    {
        int nr=row+delta[i][0];
        int nc=col+delta[i][1];
        if (nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1)
        {
            dfs(nr,nc,grid,vis);
        }
    }
   }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> mat(m,vector<int> (n));
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (grid[i][j]=='1') mat[i][j]=1;
                else
                grid[i][j]=0;
            }
        }
        vector<vector<int>> vis(m,vector<int> (n,0));
        int ans=0;
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (mat[i][j]==1 && vis[i][j]==0)
                {
                    dfs(i,j,mat,vis);
                    cout << i << " " << j << " " << mat[i][j] << endl;
                    ans++;
                }
                
            }
        }
        return ans;
        
    }
};