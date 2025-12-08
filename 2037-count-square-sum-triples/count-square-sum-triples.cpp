// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
    bool check (int num)
    {
        long long n = sqrt(num);

        if (n*n==num) return true;

        return false;
    }
public:
    int countTriples(int n) {
        int ans=0;
        for (int i=1;i<n-1;i++)
        {
            for (int j=i+1;j<=n;j++)
            {
                int num = (i*i)+(j*j);

                if (num<= (n*n))
                {
                int che = check(num);

                if (che==1) ans +=2;
                }
                else
                {
                    continue;
                }
            }
        }
        return ans;        
    }
};