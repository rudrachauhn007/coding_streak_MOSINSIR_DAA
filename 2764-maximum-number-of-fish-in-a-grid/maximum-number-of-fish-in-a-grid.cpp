// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
bool safe (int row,int col,vector<vector<int>>&grid,vector<vector<int>>&vis)
{
    int n=grid.size();
    int m=grid[0].size();
    return (row>=0 && row< n && col >=0 && col<m && grid[row][col]>0 && vis[row][col]==0);
}
int dfs (int row,int col,vector<vector<int>>& grid,vector<vector<int>>&vis)
{
    vis[row][col]=1;

    int cur_number_fish=grid[row][col];
    int dx[]={1,0,-1,0};
    int dy[]={0,1,0,-1};
    for (int i=0;i<4;i++)
    {
        int nr= row+dx[i];
        int nc=col+dy[i];
        if (safe(nr,nc,grid,vis))
        {
            cur_number_fish += dfs(nr,nc,grid,vis);
        }
    }
    //vis[row][col]=0;
    //cout <<row << " " << col << " " << cur_number_fish << endl;
    return cur_number_fish;

}
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        int maxi=0;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
               if (vis[i][j]==0 && grid[i][j]>0)
               {
               // cout << "one call completed" << endl;
                int ans= dfs(i,j,grid,vis);
                maxi = max(maxi,ans);
               }
            }
        }
        return maxi;
        
    }
};