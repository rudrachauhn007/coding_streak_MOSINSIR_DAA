class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int len = arr.size();
        vector<vector<int>> ans;

        // Step 1: Sort the array to bring closest elements together
        sort(arr.begin(), arr.end());

        int minDif = 2e6;  // Initialize with a large possible difference (max range is 2 * 1e6)

        // Step 2: Iterate through the sorted array and find the minimum difference
        for(int i = 0; i < len - 1; ++i) {
            int dif = arr[i+1] - arr[i];

            // Step 3a: If a smaller difference is found, clear the answer and store the new pair
            if(dif < minDif) {
                minDif = dif;
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});
            }
            // Step 3b: If the current difference equals the minimum, add the pair to the result
            else if(dif == minDif) {
                ans.push_back({arr[i], arr[i+1]});
            }
        }

        // Step 4: Return all pairs with the minimum absolute difference
        return ans;
    }
};