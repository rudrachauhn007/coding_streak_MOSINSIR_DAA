// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int> pre(nums.size(),0);
        pre[0]=nums[0];
        int n=nums.size();
        for (int i=1;i<n;i++)
        {
            pre[i]=nums[i]+pre[i-1];
        }
        for (auto it : pre) cout << it << " ";
        cout << endl;
        vector<int> pre2(n,0);
        pre2[n-1]=nums[n-1];
        for (int i=n-2;i>=0;i--)
        {
            pre2[i]=nums[i]+pre2[i+1];
        }
        int cnt=0;
        for (int i=0;i<n-1;i++)
        {
            if( (pre[i]-pre2[i]-nums[i])%2==0) cnt++;
        }
        return cnt;
        
    }
};