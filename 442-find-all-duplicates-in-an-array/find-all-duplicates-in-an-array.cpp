// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        for (auto it : nums) mpp[it]++;

        vector<int> v;
        for (auto it : mpp)
        {
            if (it.second > 1)
            v.push_back(it.first);
        }
        return v;
    }
};