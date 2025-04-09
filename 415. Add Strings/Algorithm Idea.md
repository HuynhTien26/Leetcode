**Đề bài: Cho 2 chuỗi num1, num2 tính tổng 2 chuỗi rồi trả về kết quả**
```
Input: num1 = "11", num2 = "123"
Output: "134"

Input: num1 = "456", num2 = "77"
Output: "533"

Input: num1 = "0", num2 = "0"
Output: "0"
```
**Ý tưởng**
- Chuyển chuỗi thành số rồi cộng lại
- Dùng vòng lặp while cho đến khi 2 chuỗi đều xử lý xong hoặc hết carry *while (i >= 0 || j >= 0 || carry) {*
 - Dùng toán tử 3 ngôi trong vòng lặp *int digit1 = (i >= 0) ? num1[i--] - '0' : 0;*
   Nếu i còn hợp lệ, lấy chữ số tại num1[i] và chuyển sang dạng số (- '0'). Sau đó giảm i
   Nếu i < 0, gán digit1 = 0
- Cộng các số *int sum = digit 1 + digit2 + carry*
- *result += char(sum % 10 + '0');* lấy chữ số hàng đơn vị (sum % 10) và chuyển sang ký tự → thêm vào result
- carry = sum / 10;

**Giải thích cách chạy dòng tính tổng**

digit1 = 9, digit2 = 8, carry = 1
→ sum = 9 + 8 + 1 = 18
+ sum % 10 = 8 → đây là số hàng đơn vị → thêm vào kết quả
+ sum / 10 = 1 → đây là số nhớ (carry) → để dùng cho bước tiếp theo
