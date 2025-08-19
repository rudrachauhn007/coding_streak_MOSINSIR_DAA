// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        int count=0;
        int cur_sum=0;
        mpp[0]=1;
        for (auto it : nums)
        {
            cur_sum += it;
            if (mpp.find(cur_sum-k)!= mpp.end())
            {
                count += mpp[cur_sum-k];
                cout << mpp[cur_sum-k] <<  " " << cur_sum << endl;
            }
            mpp[cur_sum]++;
        }
        // for (auto it : mpp)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        return count;
        
    }
};