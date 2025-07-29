// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,cnt0=0,maxlen=0;
        while (right < nums.size())
        {
            if (nums[right]==0)
            {
                cnt0++;
            }
            if (cnt0<=k)
            {
                maxlen= max(maxlen,right-left+1);
            }
            while (cnt0 > k)
            {
                if (nums[left] == 0)
                {
                    cnt0--;
                }
                left++;
            }
            right++;

        }
        return maxlen;
        
    }
};
// link to question = https://leetcode.com/problems/max-consecutive-ones-iii/submissions/1716111714/