// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        map<string,int> mpp;
        int i=0,j=0;
        string temp;
        if (s.length()<k) return 0;

        while (i < k)
        {
            temp += s[i];
            i++;
        }
        mpp[temp]++;
        while (i<s.length())
        {
            temp += s[i];
            // 011 
            temp.erase(0,1);
            mpp[temp]++;
            i++;
        }
        int check = pow(2,k);

        if (check==mpp.size())
        return 1;

        return 0;
    }
};