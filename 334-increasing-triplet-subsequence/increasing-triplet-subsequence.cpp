// shree ganeshaya namaha;|
// shree chamudamataya namaha:|
// shree saraswatiataya namaha:|
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int fi=INT_MAX,si=INT_MAX;
        for (int it : nums)
        {
            if (it <= fi)
            {
                fi=it;
            }
            else if (it <= si)
            {
                si=it;
            }
            else
            {
                return true;
            }
        }
        return false;
        
    }
};