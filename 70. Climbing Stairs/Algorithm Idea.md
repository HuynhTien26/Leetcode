**Đề bài: Bạn đang leo lên một cầu thang. Cần n bậc để lên đến đỉnh. Mỗi lần, bạn có thể leo 1 bậc hoặc 2 bậc. Hỏi có bao nhiêu cách khác nhau để bạn có thể leo lên đến đỉnh?**
```
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Giả sử n = 4:
1 + 1 + 1 + 1
1 + 1 + 2
1 + 2 + 1
2 + 1 + 1
2 + 2
→ Có 5 cách.
```
**Ý tưởng**
- Đây là bài toán giống Fibonaccy f(n)=f(n−1)+f(n−2)
Vì: Nếu gọi f(n) là số cách leo lên bậc n
Nếu bạn bước 1 bậc cuối cùng → trước đó bạn ở bậc n-1 → có f(n-1) cách để đến đó.
Nếu bạn bước 2 bậc cuối cùng → trước đó bạn ở bậc n-2 → có f(n-2) cách để đến đó.
- Điều kiện n=1 -> 1 cách
            n=2 -> 2 cách
- Đặt biến a=1 (f1), b=2 (f2) rồi dùng vòng for bắt đầu từ 3
  f(n)= f(n-1) + f(n-2) <==> int c=a+b;
  Sau đó gán a=b, b=c. Khi vòng lặp for kết thúc return b; //đáp án cuối cùng
