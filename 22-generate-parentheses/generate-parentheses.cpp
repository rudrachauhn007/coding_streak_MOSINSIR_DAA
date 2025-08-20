// SHREE GANESHAYA NAMAHA:|
// SHREE CHAMUDAMATAYA NAMAHA:|
// SHREE SARASWATIMATAYA 
class Solution {
public:
void reccurseive_calls(int n,int open,int close,vector<string>& ans,string temp)
{
    if (temp.size()==(2*n))
    {
        ans.push_back(temp);
        return;
    }
    if (open < n)
    {
        reccurseive_calls(n,open+1,close,ans,temp + "(");
    }
    if (close < open)
    {
        reccurseive_calls(n,open,close+1,ans,temp + ")");
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        reccurseive_calls(n,0,0,ans,temp);
        return ans;
    }
};