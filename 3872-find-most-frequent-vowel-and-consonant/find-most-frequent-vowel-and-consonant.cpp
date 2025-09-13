// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int> mpp;
        for (auto it : s)
        {
            mpp[it]++;
        }
        int maxi1=0;
        int maxi2=0;
        for (auto it : mpp)
        {
            if (it.first=='a' || it.first=='e' || it.first=='i'|| it.first=='o'|| it.first=='u')
            {
                maxi1=max(maxi1,it.second);
            }
            else
            {
                maxi2=max(maxi2,it.second);
            }
        }
        return maxi1+maxi2;
    }
};