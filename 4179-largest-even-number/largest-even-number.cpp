// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha;|
class Solution {
public:
    string largestEven(string s) {
        int index=-1;
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='2')
            {
                index=i;
            }
        }

        if (index==-1)
        {
            return "";
        }
        string ans="";
        for (int i=0;i<=index;i++)
        ans += s[i];

        return ans;
        
    }
};