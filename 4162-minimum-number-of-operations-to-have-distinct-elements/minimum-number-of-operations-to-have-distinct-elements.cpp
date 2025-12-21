// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int i=n-1;
        map<int,int> mpp;
        int cnt=0;
        for (i=n-1;i>=0;--i)
        {
            if (mpp[nums[i]]>=1) break;
            mpp[nums[i]]++;
            cnt++;
        }
        cout << i << " " <<cnt << endl;
        int elements_remove = nums.size()-cnt;
        if (elements_remove==n)
        {
            return 0;
        }
        int ans = ceil((elements_remove*1.00)/3);
        cout << ans<< endl;
        return ans;
        
    }
};