// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long zero=0;
        for (auto it : nums)
        {
            if (it==0)
            {
                zero++;
            }
            else
            {
                if (zero >0)
                {
                    ans += ((zero)*(zero+1)/2);
                    zero=0;
                }
            }
            
        }
        if (zero > 0)
            {
                ans += ((zero)*(zero+1)/2);
            }
        return ans;
        
    }
};