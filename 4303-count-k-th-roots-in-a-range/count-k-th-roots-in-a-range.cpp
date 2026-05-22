// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

 class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        if (k==1)
        {
            return r-l+1;
        }
         int cnt=0;
        for (int i=0;i<= 1e5;i++)
        {
            long long ans = pow(i,k);
            if (ans >= l && ans <= r)
            {
                cnt++;
            }
            if (ans > r)
            {
                break;
            }

        }
        return cnt;
        
    }
};