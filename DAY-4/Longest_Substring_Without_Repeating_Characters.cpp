// SHREE GANESHAYA NAMAHA:|
// SHREE CHAMUDAMATAYA NAMAHA:|
// SHREE SARASWATIMATAYA NAMAHA:|
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,maxi=0;
        vector<int> mpp(256,-1);
        while (r<s.size())
        {
            if (mpp[s[r]]!=-1)
            {
                l=max(mpp[s[r]]+1,l);
            }
            mpp[s[r]]=r;
            maxi = max(r-l+1,maxi);
            r++;



        }
        return maxi;
        
    }
};
// link to the code= https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/1714781146/