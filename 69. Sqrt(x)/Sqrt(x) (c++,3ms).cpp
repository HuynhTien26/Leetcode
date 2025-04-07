class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;  // Trả về x nếu x là 0 hoặc 1, vì căn bậc hai của nó là chính nó.
        int l = 0;  // Khởi tạo l là điểm bắt đầu của phạm vi tìm kiếm.
        int r = x;  // Khởi tạo r là điểm kết thúc của phạm vi tìm kiếm.
        
        while (r - l > 1) {  // Vòng lặp sẽ chạy cho đến khi khoảng cách giữa l và r chỉ còn 1.
            long m = (l + r) / 2;  // Tính giá trị trung bình của l và r.
            
            if (m * m > x) {
                r = m;  // Nếu m^2 lớn hơn x, thì căn bậc hai phải nhỏ hơn m, vì vậy giảm r.
            } else {
                l = m;  // Nếu m^2 nhỏ hơn hoặc bằng x, thì căn bậc hai phải lớn hơn hoặc bằng m, vì vậy tăng l.
            }
        }
        
        return l;  // Trả về giá trị của l, vì sau khi vòng lặp kết thúc, l sẽ là phần nguyên gần nhất của căn bậc hai.
    }
};
