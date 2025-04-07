class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x); //sqrt trả về double (kiểu 2.0)
      //nhưng gặp mySqrt trên ở dạng int => c++ tự động ép kiểu về int
    }
};
