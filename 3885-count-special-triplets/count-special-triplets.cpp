// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        map<int,int> mpp,prev;
        for (auto it : nums) mpp[it]++;
        int ans=0;
        long long mod=1e9+7;
        for (auto it : nums)
        {
            mpp[it]--;
            int temp = it*2;
            ans = (ans + 1ll *prev[temp]*mpp[temp])%mod;
            prev[it]++;

        }
        return ans;
        
        return ans;
        
    }
};