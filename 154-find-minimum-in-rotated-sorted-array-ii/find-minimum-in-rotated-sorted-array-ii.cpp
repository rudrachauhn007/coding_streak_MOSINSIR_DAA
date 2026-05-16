// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=1e9;
        for (auto it : nums)
        {
            mini = min (it,mini);
        }
        return mini;
    }
};