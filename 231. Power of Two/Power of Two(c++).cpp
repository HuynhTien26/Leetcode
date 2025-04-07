class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) return false;
        int x=log2(n); //lấy log2 của n
        if(pow(2,x) == n) return true;
        return false;
    }
};
