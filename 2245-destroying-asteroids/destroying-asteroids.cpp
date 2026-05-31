// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        bool flag= true;
        sort (ast.begin(),ast.end());
        long long ans = mass;
        for (auto it : ast)
        {
            if (ans >= it)
            {
                ans +=it;
            }
            else if ( mass < it)
            {
                flag=false;
                break;
            }
        }
        return flag;
        
    }
};