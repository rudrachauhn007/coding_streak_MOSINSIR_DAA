// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
  int bin_srch(int left,int right,int target,vector<int>& nums)
  {
    while (left<= right)
    {
        int mid = (left+right)/2;
        if (nums[mid]==target)
        {
            return mid;
        }
        if (target > nums[mid])
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
  }
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for (int i=0;i<nums.size()-1;i++)
        {
            int to_find= target-nums[i];
            int got = bin_srch(i+1,n-1,to_find,nums);
            if (got != -1)
            {
                return {i+1,got+1};
            }
        }
        return {};
    }
};