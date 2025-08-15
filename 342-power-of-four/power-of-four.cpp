// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    bool isPowerOfFour(int n) {
        double k = log(n)/log(4);

        if (k-floor(k)==0) return true;

        return false;
    }
};