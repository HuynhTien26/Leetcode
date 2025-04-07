**Đề bài: Cho n, trả về true nếu nó là lũy thừa của 2, không phải thì trả về false**
```
Input: n = 1
Output: true
Explanation: 20 = 1

Input: n = 16
Output: true
Explanation: 24 = 16

Input: n = 3
Output: false
```
**Ý tưởng**
- Xét điều kiện nếu n<1 thì không phải là lũy thừa của 2 -> return false
- Đặt biến x=log2(n), lấy logarit cơ số 2 của n, nếu đó là lũy thừa của 2 thì sẽ trả về số nguyên
- Kiểm tra xem 2^x == n ban đầu không. Nếu giống -> return true, khác return false
