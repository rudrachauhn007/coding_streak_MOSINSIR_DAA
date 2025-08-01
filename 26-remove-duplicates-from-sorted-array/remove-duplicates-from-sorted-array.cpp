// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int n=nums.size();
        vector<int>ans(n);
        int i=0;
        for(auto it : mpp)
        {
          ans[i]=it.first;
          i++;
        }
        nums=ans;
        return mpp.size();
        
    }
};