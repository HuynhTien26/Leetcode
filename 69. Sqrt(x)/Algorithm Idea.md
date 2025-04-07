**Đề bài tính căn bậc 2 của x**
```
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
```
**Ý tưởng**
- Với 0ms chỉ cần ghi dòng sqrt(x) c++ tự động ép từ double xuống int
- Với 3ms: dùng tìm kiếm nhị phân
  + Xét điều kiện x<2 trả về x (0 hoặc 1 vì căn bậc 2 của nó là chính nó)
  + l=0 ( điểm bắt đầu/giá trị nhỏ nhất phạm vi tìm kiếm)
  + r=x (điểm kết thúc/giá trị lớn nhất, gán nó =x vì sqrt(x) không bao giờ > x)
  + Gọi vòng lặp while *(r - l > 1)* đảm bảo rằng khi vòng lặp kết thúc, l sẽ là phần nguyên gần nhất của căn bậc hai.
  + Tính giá trị trung bình (m) của l và r
    - Nếu bình phương giá trị trung bình (m*m/m^2) > x => nghĩa là căn bậc 2 phải < m => gán r=m
    - else => căn bậc 2 phải > m => gán l=m
  + Sau khi vòng lặp kết thúc giá trị của l sẽ là phần nguyên gần nhất của căn bậc hai của x. Hàm trả về giá trị này

**Minh họa**
Giả sử x=8
- l=0, r=8
- Vòng lặp 1:
  - m=(0+8)/2=4
  - Kiểm tra 4*4=16 > 8 -> giảm r xuống nên r=4
- Vòng lặp 2:
  - m= (0+4)/2=2
  - Kiểm tra 2*2=4 < 8 -> tăng l lên nên l=2
- Vòng lặp 3:
  - m= (2+4)/2=3
  - Kiểm tra 3*3=9 > 9 -> giảm r xuống nên r=3
- Vòng lặp 4: KẾT THÚC
  Do while (r-l>1) hiện tại l =2, r=3 -> r-l=3-2=1 không thỏa -> dừng
  return l; (l=2)
