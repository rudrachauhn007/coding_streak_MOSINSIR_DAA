// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
// shree chamudamatya namaha:|
class Solution {
public:
int subarray(vector<int>& nums,int k)
{
    int left=0,right=0,ans=0;
    map<int,int> mpp;
    while (right < nums.size())
    {
        mpp[nums[right]]++;
        while (mpp.size() > k)
        {
            mpp[nums[left]]--;
            if (mpp[nums[left]]==0) mpp.erase(nums[left]);
            left++;
        }
        ans += (right-left+1);
        right++;

    }
    return ans;

}
int subarraysWithKDistinct(vector<int>& nums, int k) {
       if (k==0) return 0;
       if (k==1) return subarray(nums,k);
        return subarray(nums,k)- subarray(nums,k-1);
        
    }
};// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
// shree chamudamatya namaha:|
class Solution {
public:
int subarray(vector<int>& nums,int k)
{
    int left=0,right=0,ans=0;
    map<int,int> mpp;
    while (right < nums.size())
    {
        mpp[nums[right]]++;
        while (mpp.size() > k)
        {
            mpp[nums[left]]--;
            if (mpp[nums[left]]==0) mpp.erase(nums[left]);
            left++;
        }
        ans += (right-left+1);
        right++;

    }
    return ans;

}
int subarraysWithKDistinct(vector<int>& nums, int k) {
       if (k==0) return 0;
       if (k==1) return subarray(nums,k);
        return subarray(nums,k)- subarray(nums,k-1);
        
    }
};
// link to question = https://leetcode.com/problems/subarrays-with-k-different-integers/