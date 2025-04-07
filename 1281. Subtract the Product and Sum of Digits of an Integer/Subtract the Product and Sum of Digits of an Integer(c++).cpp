class Solution {
public:
    int subtractProductAndSum(int n) {
        int tong=0;
        long long nhan=1;
        
        while(n>0){
            int digit =n%10;
            tong += digit;
            nhan *= digit;
            n/=10;
        }
        return nhan - tong;
    }
};
