// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int> st(32);
        vector<int> end(32);
        int cnt=0;
        for (int i=0;i<32;i++)
        {
            int num1 = (start & (1<<i));
            int num2 = (goal & (1<<i));
            if (num1 != num2)
            {
                cnt++;
            }
        }
        return cnt;
        
    }
};