// shree ganeshaya namaha:|
// shree chamudamataya namaha:|
// shree saraswatimataya namaha:|
class Solution {
public:
    string largestGoodInteger(string num) {
        char best = 0; // to store the largest digit found
        for (int i = 0; i + 2 < num.size(); i++) {
            if (num[i] == num[i+1] && num[i] == num[i+2]) {
                best = max(best, num[i]);
            }
        }
        return best ? string(3, best) : "";

        
    }
};