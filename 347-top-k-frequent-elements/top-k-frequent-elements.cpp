class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        // Convert map to vector of pairs
        vector<pair<int, int>> vec(freq.begin(), freq.end());

        // Sort by frequency in descending order
        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second;
        });

        // Collect top k frequent elements
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(vec[i].first);
        }

        return result;
    }
};