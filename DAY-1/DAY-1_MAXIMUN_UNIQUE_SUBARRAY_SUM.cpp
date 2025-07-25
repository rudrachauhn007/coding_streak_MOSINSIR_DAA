// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
    int maxSum(vector<int>& nums) {
        map<int,int> mpp;
        int maxi=nums[0];
        bool pos=false;
        int sum=0;
        for (auto it : nums)
        {
            if (it>=0 && mpp[it]==0)
            {
                mpp[it]++;
                pos=true;
                sum += it;
            }
            maxi=max(maxi,it);
        }
        if (pos==false) return maxi;


        return sum;
        
    }
};
// link to question = https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/