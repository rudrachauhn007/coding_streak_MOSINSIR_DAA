// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int left=0,right=0,maxilen=-1;
        map<char,int>mpp;
        while (right < s.size())
        {
            mpp[s[right]]++;
            if (mpp.size() == k)
            {
                maxilen = max(maxilen,right-left+1);
            }
            if (mpp.size() > k)
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
// link to question = https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1