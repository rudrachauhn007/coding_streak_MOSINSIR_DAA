// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        map<int,int> mpp;
        for (auto it : nums)
        mpp[it]++;

        sort(nums.begin(),nums.end());
        int ans=0;
        for (int i=0;i<nums.size();i++)
        {
            if (mpp[nums[i]]>1)
            i+= mpp[nums[i]]-1;

            if (nums.size()-i-1>=k) ans+=mpp[nums[i]];
        }
        return ans;
        
    }
};