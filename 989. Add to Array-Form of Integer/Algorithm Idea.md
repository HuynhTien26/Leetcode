**Đề bài: Cho dạng mảng của số nguyên là một mảng đại diện cho các chữ số của nó theo thứ tự từ trái sang phải (num). Cộng mảng num và số nguyên k, trả về đáp án.**
```
Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234

Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455

Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021
```
**Ý tưởng**
- Duyệt từng phần tử trong num từ dưới lên
- Cộng từng chữ số cuối của num với số tương ứng của k, cộng thêm số nhớ carry
- Nếu k còn chữ số thì tiếp tục cộng
- Nếu duyệt hết num mà k còn thì thêm các số còn lại của k lên đầu mảng

**Minh họa cách chạy**
Ví dụ đầu vào: num = {1, 2, 3} , k = 912 ==> trả về kết quả 1035
*int i = num.size() - 1* -> i=2
k = 912
- Bắt đầu vòng lặp while
```cpp
while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];
                num[i] = k % 10;
                k /= 10;
                i--;
            }
```
- Lần 1
  - i=2 , num[2] =3, k=912
  - *k +=num[i]* -> 912 + 3 = 915
  - num[2] = 915 % 10 = 5
  - k = 915 / 10 = 91
  - *i--* → i = 1
 => xong vòng lặp, num hiện tại {1, 2, 5}

- Lần 2
  - i=1, num[1] =2, k = 91
  - 91 + 2 =93
  - num[1] =93 % 10 = 3
  - k = 93 /10 = 9
  - i=0
 => xong vòng lặp, num hiện tại {1, 3, 5}

- Lần 3
  - i=0, num[0] = 1, k=9
  - 9 + 1 =10
  - num[0] = 10 % 10 =1
  - k = 10/10 =1
  - i = -1
 => xong vòng lặp, num hiện tại {0, 3, 5}

- Lần 4
 - i = -1, k = 1 → i < 0 nên đi vào else
```cpp
else {
num.insert(num.begin(), k % 10);
k /= 10;
```
 - Chèn k % 10 =1 vào đầu vector
 - k /= 10 → k = 0
 - num: {1, 0, 3, 5}
