// shree ganeshaya namaha:|
// shree chamdamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
  int maxfreq(map<char,int> mpp)
  {
    int maxi=0;
    for (auto it : mpp)
    {
        maxi = max(maxi,it.second);
    }
    return maxi;
  }
    int characterReplacement(string s, int k) {
        map<char,int> mpp;
        int left=0,right=0,maxilen=0;
        while (right < s.size())
        {
            mpp[s[right]]++;
            if ((right-left+1)-maxfreq(mpp)<= k)
            {
                maxilen = max(maxilen,right-left+1);
            }
            while ((right-left+1)-maxfreq(mpp)> k)
            {
                mpp[s[left]]--;
                if (mpp[s[left]]==0) mpp.erase(s[left]);
                left++;
            }
            right++;
        }
        return maxilen;
        
    }
};