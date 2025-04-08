**Đề bài: Cho n, trả về true nếu n là lũy thừa của 4, ngược lại thì trả về false**
```
Input: n = 16
Output: true

Input: n = 5
Output: false

Input: n = 1
Output: true
```
**Ý tưởng**
- Xét điều kiện nếu n<1 thì trả về false vì không có 4^x nào thỏa n đó
- Dùng vòng lặp while để chia liên tục cho 4 tới khi không chia được nữa thì dừng
- Nếu sau vòng lặp n==1 thì return true
