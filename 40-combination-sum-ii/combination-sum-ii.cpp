// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
void recc (int index,int target,vector<vector<int>>& final_ans,vector<int>&ans,vector<int>& arr)
{
    //if (index == arr.size())
   // {
        if (target==0)
        {
            final_ans.push_back(ans);
            return ;
        }
        
    //}

    // starting from the very first index
    for (int i=index;i<arr.size();i++)
    {
        if (i>index && arr[i]==arr[i-1]) continue;

        if (arr[i] <= target)
        {
            ans.push_back(arr[i]);
            recc(i+1,target-arr[i],final_ans,ans,arr);
            ans.pop_back();
        }
        else
        {
            break;
        }
    }

 }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(),cand.end());
        vector<vector<int>> final_ans;
        vector<int> ans;
        recc(0,target,final_ans,ans,cand);
        return final_ans;
        
    }
};