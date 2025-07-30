class Solution {
public:
    int subarray(vector<int>& nums, int k) {
        int left = 0, right = 0, ans = 0;
        long long cnt = 0;  // use long long to avoid overflow

        while (right < nums.size()) {
            cnt += nums[right];
            while (cnt > k) {
                cnt -= nums[left];
                left++;
            }
            ans += (right - left + 1);
            right++;
        }
        return ans;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        if (goal < 0) return 0;
        if (goal == 0) return subarray(nums,goal);
         return subarray(nums, goal) - subarray(nums, goal - 1);
    }
};

// link to question = https://leetcode.com/problems/binary-subarrays-with-sum/