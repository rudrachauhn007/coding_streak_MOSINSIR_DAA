// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int> mpp;
        vector<int> ans;
        for (int i=0;i<A.size();i++)
        {
            mpp[A[i]]++;
            mpp[B[i]]++;
            int cnt=0;
            for (auto it : mpp)
            {
                if (it.second ==2)
                {
                    cnt++;
                }
            }
            ans.push_back(cnt);

        }
        return ans;
    }
};