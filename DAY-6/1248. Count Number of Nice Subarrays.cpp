// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
int subarray(vector<int>& nums,int k)
{
    int right=0,left=0,ans=0,cnt=0;
    while (right < nums.size())
    {
        if (nums[right]%2==1)
        {
            cnt++;
        }
        while (cnt > k)
        {
            if (nums[left]%2==1)cnt--;
            left++;
        }
        ans += (right-left+1);
        right++;
    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
        return subarray(nums,k)-subarray(nums,k-1);

        
    }
};
// link to question = https://leetcode.com/problems/count-number-of-nice-subarrays/description/