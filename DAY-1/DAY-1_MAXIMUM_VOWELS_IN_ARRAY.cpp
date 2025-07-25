// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
    int maxVowels(string s, int k) {
        int cur_vowels=0;
        for (int i=0;i<k;i++)
        {
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                cur_vowels++;
            }
        }
        int maxi = cur_vowels;
        int right=k;
        int left=0;
        while (right < s.size())
        {
            if (s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u')
            {
                cur_vowels++;
            }
            if (s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u')
            {
                cur_vowels--;
            }
            right++;
            left++;
            maxi = max(maxi,cur_vowels);
          
          
        }

        return maxi;
        
    }
};
// link to question = https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/