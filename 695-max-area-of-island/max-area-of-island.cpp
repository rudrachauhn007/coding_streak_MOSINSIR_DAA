// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
int bfs(int row,int col,vector<vector<int>>&grid,vector<vector<int>>& vis)
{
    int n=grid.size();
    int m=grid[0].size();
    int ans=0;
    queue<pair<int,int>> q;
    q.push({row,col});
    vis[row][col]=1;
    vector<vector<int>> delta={{1,0},{0,1},{-1,0},{0,-1}};
    while (!q.empty())
    {
        int cur_row=q.front().first;
        int cur_col=q.front().second;
        q.pop();
        
        for (int i=0;i<4;i++)
        {
            int nr=cur_row+delta[i][0];
            int nc=cur_col+delta[i][1];
            if (nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 && grid[nr][nc]==1)
            {
                q.push({nr,nc});
                vis[nr][nc]=1;
            }

        }
        ans++;
        

    }
    return ans;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (grid[i][j]==1 && vis[i][j]==0)
                {
                    int temp=bfs(i,j,grid,vis);
                    ans=max(temp,ans);
                }
            }
        }
        return ans;
        
    }
};