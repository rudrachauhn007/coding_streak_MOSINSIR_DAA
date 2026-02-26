class Solution {
public:
    int numSteps(string s) {
        int ans = 0;
        int c = 0;

        for(int i=s.length() - 1; i > 0;i--){
            if((s[i] == '1') + c == 1){
                ans += 2;
                c = 1;
            }else{
                ans += 1;
            }
        }

        return ans + c;
    }
};