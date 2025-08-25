// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
int rec (int n,vector<int> &dp)
{
    if (n==1) return 1;
    if (n==2) return 2;
     if (dp[n]!= -1) return dp[n];
     int call1=rec(n-1,dp);
     int call2=rec(n-2,dp);

     return dp[n]=call1+call2;
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int ans = rec(n,dp);
        return ans;
        
    }
};