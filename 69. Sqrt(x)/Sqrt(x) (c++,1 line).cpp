class Solution {
public:
    int mySqrt(int x) {
        if(x<1) return 0;
        return sqrt(x); //sqrt trả về double (kiểu 2.0)
      //nhưng gặp mySqrt trên ở dạng int => c++ tự động ép kiểu về int
    }
};
