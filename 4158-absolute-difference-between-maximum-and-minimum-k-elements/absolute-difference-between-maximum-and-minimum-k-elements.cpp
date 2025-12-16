// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum1=0,sum2=0;
        for (int i=0;i<k;i++)
        {
            sum1 += nums[i];
        }
        int n=nums.size();
        for (int i=n-1;i>=(n-k);i--)
        {
           // cout << nums[i] << endl;
            sum2 += nums[i];
        }
       // cout << sum2 << endl;

        return sum2-sum1;
        
    }
};