// SHREE Ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for (int i=0;i<=n;i++)
        {
            int cnt1=0;
            for (int j=0;j<=32;j++)
            {
                long long bit = (1ll<<j);
                if (i&bit)cnt1++;
                //cout << bit << endl;
            }
            ans.push_back(cnt1);
            cout << cnt1 << endl;
        }
        return ans;
        
    }
};