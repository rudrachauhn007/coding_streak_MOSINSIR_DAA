// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort (s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0,j=0;
        for (j=0;j<t.size();j++)
        {
            if (s[j]!=t[j])
            {
                return t[j];
            }
        }
        return t[j];
        
    }
};