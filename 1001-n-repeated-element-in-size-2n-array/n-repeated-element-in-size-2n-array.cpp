// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mpp;
        for (auto it : nums) mpp[it]++;

        for (auto it :mpp)
        {
            if (it.second >=2)
            return it.first;
        }

        return 0;
        
    }
};