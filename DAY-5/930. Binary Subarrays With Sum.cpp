// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int, int> prefixCount;
        prefixCount[0] = 1;
        
        int sum = 0, ans = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            
            if (prefixCount.find(sum - goal) != prefixCount.end()) {
                ans += prefixCount[sum - goal];
            }
            
            prefixCount[sum]++;
        }
        
        return ans;
    }
};
// link to question = https://leetcode.com/problems/binary-subarrays-with-sum/description/
