// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
bool prime (int n)
{
    if (n<=1) return false;
    if (n<=3) return true;
    if(n%2==0 || n%3==0) return false;

    for (int i=5;i*i<n;i++)
    {
        if (n%i==0) return false;
    }
    return true;
}
    int countPrimes(int n) {
        // int cnt=0;
        // for (int i=2;i<n;i++)
        // {
        //     if (prime(i)) cnt++;
        // }

        if (n<=2) return 0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        int cnt=1;
        for (int i=3;i*i<=n;i+=2)
        {
            if (prime[i])
            {
                for (int j=i*i;j<n;j+=2*i)
                {
                    prime[j]=false;
                }
            }
        }
        for (int i=3;i<n;i+=2)
        {
            if (prime[i]) cnt++;
        }
        return cnt;
        
    }
};