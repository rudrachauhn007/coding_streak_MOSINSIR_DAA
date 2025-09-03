// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
int recc (int index,int last,vector<int>&nums,vector<int>&dp)
{
    if (index== last-1) return nums[index];

    if (index >= last) return 0;

    if (dp[index]!=-1) return dp[index];

    int picl = nums[index]+ recc(index+2,last,nums,dp);
    int notpick=recc(index+1,last,nums,dp);

    return dp[index]= max(picl,notpick);
}
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        int n=nums.size();
        vector<int> dp(n+1,-1);
        vector<int> dp2(n+1,-1);

        int firstround= recc(0,n-1,nums,dp);
        int secondround=recc(1,n,nums,dp2);
        return max(firstround,secondround);
        
    }
};