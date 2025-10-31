// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mpp;
        for (auto it : nums)
        mpp[it]++;
        vector<int> v;
        for (auto it : mpp)
        {
            if (it.second == 2)
            v.push_back(it.first);

            if (v.size()==2) break;
        }

        return v;
    }
};