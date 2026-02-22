class Solution {
public:
    int binaryGap(int n) {
        string s = "";
        
        while (n > 0) {
            s += to_string(n % 2);
            n /= 2;
        }

        int last = -1;
        int maxi = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (last != -1) {
                    maxi = max(maxi, i - last);
                }
                last = i;
            }
        }

        return maxi;
    }
};