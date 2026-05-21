// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans=0;
        set<string> st;
        for (auto &it : arr1)
        {
            string temp;
            string num=to_string(it);
            for (auto itt : num)
            {
                temp += itt;
                st.insert(temp);
            }
        }
        for (auto it : arr2)
        {
            string temp;
            string num=to_string(it);

            for (auto itt : num)
            {
                temp += itt;
                if (st.find(temp) != st.end())
                {
                    ans = max(ans,(int)temp.size());
                }
            }
        }
        return ans;
        
    }
};