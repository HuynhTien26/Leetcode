class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x;
        if (x < 2) return x;
        while (r - l > 1) {
            long m = (l + r) / 2;
            if (m * m > x) r = m;
            else l = m;
        }
        return l;
    }
};
