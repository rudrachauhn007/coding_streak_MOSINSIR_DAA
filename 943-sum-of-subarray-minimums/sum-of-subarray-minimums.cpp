//  shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
const int mod= 1e9+7;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int len=arr.size();
        vector<int> left(len,-1);
        vector<int> right(len,len);
        stack<int> st;
        for (int i=0;i<len;i++)
        {
            while (!st.empty() && arr[st.top()]>= arr[i])
            st.pop();

            if (!st.empty())
            left[i]=st.top();

            st.push(i);
        }
        st=stack<int>();
        for (int i=len-1;i>=0;i--)
        {
            while (!st.empty() && arr[st.top()]>arr[i])
            st.pop();

            if (!st.empty())
            right[i]=st.top();

            st.push(i);
        }
        long long sum=0;
        for (int i=0;i<len;i++)
        {
            sum += static_cast<long long>(i-left[i])*(right[i]-i)*arr[i]%mod;
            sum %= mod;
        }
        return sum;
    }
};