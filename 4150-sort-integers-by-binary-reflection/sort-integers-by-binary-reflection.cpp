// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
    int binary(const string &bin) {
    int value = 0;
    for (char c : bin) {
        value = value * 2 + (c - '0');
    }
    return value;
}
public:
    vector<int> sortByReflection(vector<int>& nums) {
        map<string,vector<int>> mpp;
        vector<pair<int,int>> pp;
        for (int i=0;i<nums.size();i++)
        {
            int cur_num = nums[i];
            string s="";
            while (cur_num > 0)
            {
                int rem= cur_num%2;
                s+= (rem+'0');
                cur_num = cur_num/2;
            }
            int num = binary(s);
            pp.push_back({num,nums[i]});
        }
        sort (pp.begin(),pp.end());
        vector<int> ans;
        for (auto it : pp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};