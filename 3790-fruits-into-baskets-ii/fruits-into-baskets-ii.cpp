// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=baskets.size();
        int m=fruits.size();
        vector<bool> fru(m,false);
        vector<bool> bask(n,false);
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (fru[i]==false && bask[j]==false)
                {
                     if (fruits[i] <= baskets[j])
                     {
                        fru[i]=true;
                        bask[j]=true;
                        break;
                     }
                }
            }
        }
        int cnt=0;
        for (auto it : fru)
        {
            if (it == false)
            cnt++;
        }
        return cnt;
    }
};