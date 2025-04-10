**Đề bài: Đoán số bí mật. Cho dãy n, pick là số cần tìm. Mỗi khi bạn đoán sai, tôi sẽ cho bạn biết con số tôi chọn cao hơn hay thấp hơn dự đoán của bạn. Trả lại số được chọn**

**Lưu ý**
```
-1: Dự đoán của bạn cao hơn con số tôi chọn (tức là ).num > pick
1: Dự đoán của bạn thấp hơn con số tôi đã chọn (tức là ).num < pick
0: dự đoán của bạn bằng số tôi đã chọn (tức là ).num == pick
Và bài cho sẵn int guess(int num)
```
```
Input: n = 10, pick = 6
Output: 6

Input: n = 1, pick = 1
Output: 1

Input: n = 2, pick = 1
Output: 1
```
**Ý tưởng**
- Sử dụng thuật toán tìm kiếm nhị phân, nhưng với bài này theo như đề cho thì dùng guess để tìm *iint res=guess(m)*
- Khi sử dụng *guess* trong bài này sẽ có phần hơi khác với tìm kiếm nhị phân hay làm ở điều kiện if
```
guess(num) == -1: số bạn đoán cao hơn → phải giảm phạm vi
guess(num) == 1: số bạn đoán thấp hơn → phải tăng phạm vi
guess(num) == 0: số cần tìm/đoán
```
- Có nghĩa là khi
  - res==0 -> return m
  - res < 0 -> res = -1 -> *số mình đoán cao hơn số tìm* -> r = m-1
  - res > 0 -> res = 1 -> *số mình đoán thấp hơn số cần tìm* -> l = m + 1  
