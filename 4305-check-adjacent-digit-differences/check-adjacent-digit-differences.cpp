// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        bool flag=true;
        int n=s.size()-1;
        for (int i=0;i<n;i++)
        {
            int num1= s[i]-'0';
            int num2= s[i+1]-'0';
            if (abs(num1-num2)>2)
            {
                return false;

            }
        }
        return true;
        
    }
};