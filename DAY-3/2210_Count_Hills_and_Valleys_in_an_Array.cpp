// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|


class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector<int> arr;
        
        // Step 1: Remove consecutive duplicates
        arr.push_back(nums[0]);
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                arr.push_back(nums[i]);
            }
        }
        int prev=arr[0];
        int cnt=0;
        for (int i=1;i<arr.size()-1;i++)
        {
            if (arr[i]!=arr[i+1])
            {
                if ((arr[i] > prev&& arr[i]> arr[i+1]) || (prev>arr[i] && arr[i+1] > arr[i]))
                {
                    
                    cnt++;
                }
                
                
            }
            prev=arr[i];
            
        }
        return cnt;
        
    }
};
// link to question = https://leetcode.com/problems/count-hills-and-valleys-in-an-array/description/?envType=daily-question&envId=2025-07-27