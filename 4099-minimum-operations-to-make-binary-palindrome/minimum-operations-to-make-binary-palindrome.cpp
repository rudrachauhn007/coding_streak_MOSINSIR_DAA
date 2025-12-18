// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
string toBinary(int n) {
    if (n == 0) return "0";

    string binary = "";
    while (n > 0) {
        binary += char('0' + (n % 2));
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

    vector<int> minOperations(vector<int>& nums) {
        vector<int> num_pali;
        for (int i=1;i<=5500;i++)
        {
            string temp=toBinary(i);
            string  temp2=temp;
            reverse(temp2.begin(),temp2.end());

            if (temp==temp2)
            {
                num_pali.push_back(i);
            }
        }

        vector<int> ans;
        for (auto it : nums)
        {
            int mini=1e9;
            for (auto itt : num_pali)
            {
                mini = min(mini,abs(it-itt));
            }
            ans.push_back(mini);
        }
        return ans;
        
    }
};