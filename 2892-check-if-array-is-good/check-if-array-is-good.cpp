// shree ganeshaya namaha:|
// shree chamudamataya namaha;|
// shree saraswatimataya namaha:|
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size()-1;
        int ans = ((n)*(n+1))/2  + n ;
        int cnt=0;
        unordered_map<int,int>mpp;
        int maxi=0;
        for (auto it : nums)
        {
            mpp[it]++;
            cnt += it;
            maxi = max(it,maxi);
        }

        if (mpp.size() == n && n == maxi)
        {
            if (ans == cnt)
            {
                return true;
            }
        }

        //cout <<mpp.size() << " " << cnt << " " << ans << endl;


        return false;
    }
};