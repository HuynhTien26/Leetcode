**Đề bài: Tính dãy fibonancy**
```
Biết
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
```

```
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
```
**Ý tưởng**
- Cách 1 dử dụng đệ quy (sẽ chậm khi n>30)
- Cách 2 dùng vòng lặp
```cpp
        int a=0, b=1;
        for(int i=2;i<=n;i++){
            int tmp=a+b;
            a=b;
            b=tmp;
        }
        return b;
```
**Cách chạy của vòng lặp**
- a = 0: là số Fibonacci đầu tiên, tức là F(0) = 0
- b = 1: Đây là số Fibonacci thứ hai, tức là F(1) = 1
- Vòng lặp for bắt đầu từ i = 2 (vì F(0) và F(1) đã có sẵn).
Ví dụ với n=4
a=0,b=1
- Vòng lặp (i chạy từ 2 đến 4)
- i=2
tmp=a+b=0+1=1
a=b=1
b=tmp=1
=> Sau khi vòng lặp lần đầu: a = 1, b = 1 (đây là F(2))
- i = 3
temp = a + b = 1 + 1 = 2
a = b = 1
b = temp = 2
=> Sau khi vòng lặp lần 2: a = 1, b = 2  (đây là F(3))
- i = 4
temp = a + b = 1 + 2 = 3
a = b = 2
b = temp = 3
=> Sau khi vòng lặp lần 3: a = 2, b = 3 (đây là F(4))
return b; //return 3
