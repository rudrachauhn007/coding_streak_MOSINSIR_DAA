// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
void recc (int index,vector<int>&ans,set<vector<int>>& final_ans,vector<int>& arr)
{
    if (index==arr.size())
    {
        final_ans.insert(ans);
        return;
    }
    // final_ans.insert(ans);
    // for (int i=index;i<arr.size();i++)
    // {
    //     ans.push_back(arr[i]);
    //     recc(index+1,ans,final_ans,arr);
    //     ans.pop_back();
    // }
    //pick condition
    // ans.push_back(arr[index]);
    // recc(index+1,ans,final_ans,arr);
    // ans.pop_back();
    // recc(index,ans,final_ans,arr);

    // pickup condition 
    ans.push_back(arr[index]);
    recc (index+1,ans,final_ans,arr);
    ans.pop_back();
    recc (index+1,ans,final_ans,arr);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        sort (nums.begin(),nums.end());
        set<vector<int>> final_ans;
        recc(0,ans,final_ans,nums);
        vector<vector<int>> full;
        for (auto it: final_ans)
        {
            full.push_back(it);
        }
        return full;
        
    }
};