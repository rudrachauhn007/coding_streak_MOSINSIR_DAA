// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        int fre=0;
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (grid[i][j]==2)
                {
                    q.push({i,j});
                }
                if (grid[i][j]==1)
                {
                    fre++;
                }
            }
        }
        int rot=0;
        int time=0;
        while (!q.empty())
        {
            int si=q.size();
            while (si--)
            {
                int row= q.front().first;
                int col=q.front().second;
                q.pop();
                vector<vector<int>> delta ={{1,0},{0,-1},{-1,0},{0,1}};
                for (int i=0;i<4;i++)
                {
                    int cur_row=row+delta[i][0];
                    int cur_col=col+delta[i][1];
                    if (cur_row<m && cur_col<n && cur_row>=0 && cur_col>=0 && grid[cur_row][cur_col]==1)
                    {
                        grid[cur_row][cur_col]=2;
                        q.push({cur_row,cur_col});
                        rot++;
                    }
                }

            }
            if (!q.empty()) time++;
        }
        if (rot != fre) return -1;

        return time;
    }
};