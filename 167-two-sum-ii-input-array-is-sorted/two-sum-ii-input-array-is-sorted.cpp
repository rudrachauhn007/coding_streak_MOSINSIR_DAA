// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;  // faster than map
        for (int i=0;i<nums.size();i++)
        {
            int finding = target - nums[i];
            if (mpp.find(finding)!=mpp.end())
            {
                return {mpp[finding]+1, i+1}; // +1 if problem needs 1-based indexing
            }
            mpp[nums[i]] = i; // store index of current element
        }
        return {};
    }
};
