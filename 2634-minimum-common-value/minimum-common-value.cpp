// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mpp;
        for (auto it : nums1)
        {
            if (mpp[it]==0)
            {
                mpp[it]++;
            }
        }
        for (auto it : nums2)
        {
            if (mpp[it]==1)
            {
                mpp[it]++;
            }
        }
        int ans=1e9+10;
        for (auto it : mpp)
        {
            if (it.second==2)
            {
                ans = min (ans,it.first);
            }
        }
        if (ans== (1e9+10))
        {
            return -1;
        }

        return ans;

        return 0;
        
    }
};