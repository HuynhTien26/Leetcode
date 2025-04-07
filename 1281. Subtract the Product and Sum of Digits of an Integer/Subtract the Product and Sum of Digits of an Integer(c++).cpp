class Solution {
public:
    int subtractProductAndSum(int n) {
        int tong=0;
        int nhan=1;
        
        while(n){ //chạy tới khi n=0 thì dừng
            int digit =n%10;
            tong += digit;
            nhan *= digit;
            n/=10;
        }
        return nhan - tong;
    }
};
