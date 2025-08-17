class Solution {
public:
    bool isPerfectSquare(int num) {
        long long n=sqrt(num);
        if (n*n==num) return true;
        else 
        return false;
    }
};
