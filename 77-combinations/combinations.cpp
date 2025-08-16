// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
vector<vector<int>> ans;
        void backtrack(int start,int n,int k,vector<int> &cur)
        {
            if (cur.size()==k)
            {
                ans.push_back(cur);
                return;
            }
            for (int i=start;i<=n;i++)
        {
            cur.push_back(i);
            backtrack(i+1,n,k,cur);
            cur.pop_back();
        }
        }
        

    vector<vector<int>> combine(int n, int k) {
        vector<int> cur;
        backtrack(1,n,k,cur);
        return ans;
        
        
    }
};