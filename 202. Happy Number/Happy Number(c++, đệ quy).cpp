class Solution {
public:
    bool isHappy(int n) {
        return ishappyhelper(n,n, tongbinhphuong(n)); } //gọi hàm trợ giúp để kiểm tra số hạnh phúc

    int tongbinhphuong(int n){
        if(n==0) return 0;
        int digit =n%10; //lấy chữ số cuối
        return digit *digit + tongbinhphuong(n/10); //bình phương chữ số cuối rồi gọi đệ quy với phần còn lại n/10
    }

//Ví dụ tongbinhphuong(19)
//=> 9*9+ tongbinhphuong(1)
//81 +(1*1+tongbinhphuong(0))
//81+1+0 =82

    bool ishappyhelper(int n, int slow, int fast) { //dùng thuật toán rùa và thỏ để phát hiện vòng lặp
        //slow di chuyển từng bước(chậm)
        //fast di chuyển 2 bước (nhanh)
        if(fast==1) return true; //số hạnh phúc
        if(fast==slow) return false; //bị lặp vô hạn
      
    return ishappyhelper(n,tongbinhphuong(slow), tongbinhphuong(tongbinhphuong(fast))); //di chuyển slow 1 bước, fast 2 bước
    }
};
