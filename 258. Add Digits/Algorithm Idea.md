**Đề bài: Cho số nguyên num. Cộng liên tục các chữ số trong num đến khi còn 1 chữ số rồi trả về**
```
Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.

Input: num = 0
Output: 0
```
**Ý tưởng**
- Với cách 1: dùng 2 vòng lặp while để xét điều kiện num>=10 (num có 2 chữ số) và num>0 để tách từng số ra cộng lại rồi trả về đáp án
- Cách 2 dùng *1+(num-1)%9* cho nhanh, gọn, lẹ
1+(num-1)%9 là nó tính ra chữ số cuối cùng sau khi cộng liên tục tất cả các chữ số của num, mà không cần dùng vòng lặp hay đệ quy
Ví dụ num = 38 trong input trên
Nếu tính theo công thức thì sẽ thành 1 +(38-1) % 9 = 1 + 37 % 9 = 1 + 1 = 2
