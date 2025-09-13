// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
    int minOperations(string s) {
        vector<int> vec(26,0);
        for (int i=0;i<s.length();i++)
        {
            vec[s[i]-'a']++;
        }
        int op=0;
        for (int i=1;i<26;i++)
        {
            if (vec[i]!=0)
            {
                op = 26-i;
                break;
            }
        }
        return op;
    }
  

};