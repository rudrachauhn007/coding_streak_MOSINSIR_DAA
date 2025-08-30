// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|

class Solution {
public:
vector<vector<int>>final_ans;
void rec(vector<int>&ans,vector<int>&arr,vector<bool>&freq)
{
    if (ans.size()==arr.size())
    {
        final_ans.push_back(ans);
        return;
    }
    for (int i=0;i<arr.size();i++)
    {
        if (!freq[i])
        {
            freq[i]=true;
            ans.push_back(arr[i]);
            rec(ans,arr,freq);
            ans.pop_back();
            freq[i]=false;
        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        vector<bool> freq(nums.size(),false);
        rec(ans,nums,freq);
        return final_ans;
        
    }
};