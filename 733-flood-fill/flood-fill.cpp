class Solution {
public:
 bool check(int row,int col,vector<vector<int>>&temp,int ori)
  {
      int n=temp.size();
      int m=temp[0].size();
      return (row>=0 && col>=0 && row<n && col < m && temp[row][col]==ori );
  }
  void bfs(int row,int col,vector<vector<int>>&temp,vector<vector<int>>&vis,int ori,int color)
  {
      queue<pair<int,int>> q;
      q.push({row,col});
      vis[row][col]=1;
      temp[row][col]=color;
      int delta[4][2]={{1,0
      },{0,1},{-1,0},{0,-1}};
      while (!q.empty())
      {
          int cur_row=q.front().first;
          int cur_col=q.front().second;
          q.pop();
          for (int i=0;i<4;i++)
          {
              int nr=cur_row+delta[i][0];
              int nc=cur_col+delta[i][1];
              if (check(nr,nc,temp,ori))
              {
                  vis[nr][nc]=1;
                  temp[nr][nc]=color;
                  q.push({nr,nc});
              }
          }
      }
  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc]==color) return image;
        
        vector<vector<int>> temp=image;
        int original_col=image[sr][sc];
        
        // Code here
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        bfs(sr,sc,temp,vis,image[sr][sc],color);
        return temp;
        
    }
};