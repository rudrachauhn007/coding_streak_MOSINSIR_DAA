// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        map<int,int> mpp;
        for (auto it : friends)
        {
            mpp[it]++;
        }
        vector<int> ans;
        for (auto it : order)
        {
            if (mpp[it]==1)
            {
                ans.push_back(it);
            }
        }
        return ans;
        
    }
};