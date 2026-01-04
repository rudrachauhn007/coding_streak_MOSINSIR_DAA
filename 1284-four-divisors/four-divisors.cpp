// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int sum (int n)
    {
        vector<int> ans;
        int cnt=0;
        for (int i=1;i*i<=n;i++)
        {
             if (n%i==0)
             {
                ans.push_back(i);
                if (i != (n/i))
                {
                    ans.push_back(n/i);
                }
             }

             if (ans.size() > 4)
             return 0;
        }
        if (ans.size()==4)
        {
            for (auto it : ans) cnt += it;
        }

        return cnt;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for (auto it : nums)
        {
            ans += sum(it);
        }
        return ans;
        
    }
};