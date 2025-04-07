**Đề bài: Cho 1 số nguyên n, trả về hiệu của tích - tổng của số đó.**
```
Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15

Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
```
**Ý tưởng**
- Khởi tạo biến tổng, nhân cho hàm
- Dùng vòng lặp while(n) chạy tới khi n=0
  + Lấy chữ số cuối của n + cho tổng, nhân cho nhân rồi bỏ đi số đó, tính đến số kế tiếp
- return nhân -tổng;

**Minh họa**
Khai báo tong=0; nhan=1;
n=123
digit =n%10 ->digit=3
tong +=digit -> tong =3
nhan *=digit -> nhan =3
n/=10 -> n xóa đi 3 -> n= 12
- Vòng lặp chạy tiếp tới khi n không còn phần tử
