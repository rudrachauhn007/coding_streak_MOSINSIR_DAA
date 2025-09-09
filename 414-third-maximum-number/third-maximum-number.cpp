// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Use set to remove duplicates
        set<int> st(nums.begin(), nums.end());

        // If less than 3 unique numbers, return the maximum
        if (st.size() < 3) {
            return *st.rbegin(); // largest element
        }

        // Otherwise, find the 3rd maximum
        auto it = st.rbegin(); // largest
        advance(it, 2); // move 2 steps to get 3rd largest
        return *it;
    }
};
