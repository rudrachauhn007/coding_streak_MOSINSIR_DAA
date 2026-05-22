class Solution {
public:
long long  getDivisors(int n,map<int,int> &mpp)
{
    vector<int> divisors;
    long long ans = n;


    for (long long i = 1; i * i <= n; i++)
    {
        if (n%i==0)
        {
            if (mpp[i]!=0)
            {
                ans=min(ans,i);
            }
            if (mpp[n/i]!=0)
            {
                 ans = min (ans ,(n/i));
            }

        }
    }


    return ans;
}
    long long minArraySum(vector<int>& nums) {
        long long ans=0;
        map<int,int> mpp;
        for (auto it : nums)
        {
            mpp[it]++;
        }
        for (auto it : nums)
        {
            ans += getDivisors(it,mpp);
        }
        
            

        return ans;
    }
};