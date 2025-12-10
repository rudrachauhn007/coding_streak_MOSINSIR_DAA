// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> cnt(nums.size()+1);
        vector<int> ans;
        for (auto it : nums) cnt[it]++;
        for (int i=1;i<=nums.size();i++)
        {
            if (cnt[i]==0) ans.push_back(i);
        }
        return ans;
        
    }
};