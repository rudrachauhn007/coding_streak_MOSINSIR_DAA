class Solution {
public:
    int findClosest(int x, int y, int z) {
        int p1 = abs(z-x);
        int p2 = abs(z-y);
        if (p1 < p2) return 1;
        if (p2< p1) return 2;
        return 0;
        
    }
};