// SHREE GANESHAYA NAMAHA:|
// SHREE CHAMUDAMATAYA NAMAHA:|
// SHREE SARASWATIMATAYA NAMAHA:|

class Solution {
    void dfs(int start,vector<vector<int>> &adj,vector<int>& vis)
    {
        vis[start]=1;
        for (auto it : adj[start])
        {
            if (!vis[it])
            {
                dfs(it,adj,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cnt=0;
        int n=isConnected.size();
        vector<int> vis(n,0);
        vector<vector<int>> adj(n);
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (isConnected[i][j]==1 && i!=j)
                {
                    adj[i].push_back(j);
                    //adj[j].push_back(i);
                }
            }
        }
        for (int i=0;i<n;i++)
        {
           if (!vis[i])
           {
            dfs(i,adj,vis);
            cnt++;
           }
        }
        return cnt;
        
    }
};