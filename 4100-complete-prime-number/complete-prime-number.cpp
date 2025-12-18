// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    
    return isPrime;
}
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


    bool completePrime(int num) {
       // vector<bool> prime=sieve(num);

        vector<string> n;
        string temp=to_string(num);
        string temp1="";
        for (int i=0;i<temp.size();i++)
        {
            temp1 += temp[i];
            n.push_back(temp1);
        }
        string temp2="";
        for (int i=n.size()-1;i>=0;i--)
        {
            char ch=temp[i];
            temp2 = ch+temp2;
            n.push_back(temp2);
        }
        bool flag=true;

        for (auto it : n)
        {
            if (isPrime(stoi(it))==false)
            {
                flag=false;
                break;
            }
        }


        return flag;
        
    }
};