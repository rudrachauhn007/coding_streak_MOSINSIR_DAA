// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur_mini=prices[0];
        int maxi_prof=0;
        for (auto it : prices)
        {
            int cur_prof=it-cur_mini;
            maxi_prof=max(maxi_prof,cur_prof);
            cur_mini = min(cur_mini,it);
        }
        return maxi_prof;
        
    }
};