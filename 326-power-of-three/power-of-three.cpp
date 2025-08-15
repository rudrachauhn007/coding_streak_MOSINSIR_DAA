// SHREE GANESHAYA NAMAHA:|
// SHREE CHAMUDAMATAYA NAMAHA:|
// SHREE SARASWATIMATAYA NAMAHA:|
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<0) return false;
        double k= log(n)/log(3);

         return fabs(k - round(k)) < 1e-10;
        
    }
};