// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        vector<int> pre(n);
        pre[0]=prices[0];
        int counter=0;
        long long ans=n;
        for (int i=1;i<n;i++)
        {
            if (prices[i-1]==prices[i]+1)
            {
                counter++;
            }
            else
            {
                
                counter=0;
            }
            ans+= counter;
        }
        return ans;
        
    }
};