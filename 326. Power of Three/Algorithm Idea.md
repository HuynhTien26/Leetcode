**Đề bài: Cho n, trả về true nếu nó là lũy thừa của 3, nếu ngược lại return false**
```
Input: n = 27
Output: true
Explanation: 27 = 33

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1)
```
**Ý tưởng**
- Xét điều kiện nếu n<1 thì return false do 3^n khi đó không có nghĩa
- Sử dụng vòng lặp để chia n cho 3 đến khi n không chia hết cho 3 thì dừng lại

```cpp
while(n%3==0){ //Miễn là n còn chia hết cho 3 thì cứ tiếp tục chia n cho 3
        n/=3;}
//Việc này lặp lại liên tục, đến khi n không còn chia hết cho 3 nữa thì dừng lại
```
- return n==1 (return true nếu n==1)
