**Đề bài: Cho dãy tribonacci được định nghĩa như dưới. Cho n, trả về kết quả của T(n)  **
```
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
```
```
Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4

Input: n = 25
Output: 1389537
```
**Ý tưởng**
- Xét các điều kiện với định nghĩa được cho
 - n==0 return 0
 - n==1 ||n==2 return 1
- Sử dụng vòng lặp for bắt đầu từ 3 với a=0 (T0), b=1 (T1), c=1 (T2)
  - Dùng 1 biến tạm thời tmp để lưu kết quả tính tổng
  - Sau khi cộng xong thì cho a=b, b=a, c=tmp rồi return c để trả về kết quả
