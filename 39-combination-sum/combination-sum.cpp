// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
void recc (int index,int target,vector<int>&ans,vector<vector<int>>& final_ans,vector<int>& candidates)
{
    int n=candidates.size();
    if (index == n )
    {
        if (target==0)
        {
            final_ans.push_back(ans);
        }
        return;
    }
    if (candidates[index]<= target)
    {
        ans.push_back(candidates[index]);
        recc(index,target-candidates[index],ans,final_ans,candidates);
        ans.pop_back();
    }

    recc (index+1,target,ans,final_ans,candidates);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> final_ans;
        recc (0,target,ans,final_ans,candidates);
        return final_ans;

        
    }
};