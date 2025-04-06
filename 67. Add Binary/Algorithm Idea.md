** Đề bài: Cho hai chuỗi nhị phân, trả về tổng của chúng dưới dạng nhị phân**
```
Input: a = "11", b = "1"
Output: "100"

Input: a = "1010", b = "1011"
Output: "10101"
```
```
**Giải thích về cách đổi, chuyển hệ nhị phần -> thập phân -> cộng lại rồi trả về nhị phân**
Nhị phân	Thập phân
"0"	         0
"1"	         1
"10"	       2
"11"	       3
"100"	       4
"101"	       5
"110"	       6
"111"	       7
```

**Ý tưởng**
- Duyệt từng phần tử từ phải sang trái của mỗi chuỗi
- Cộng từng cặp với nhau, lưu vào biến nhớ (carry) nếu có
- Nếu kết quả >1, lưu phần dư (result%2) và mang phần nhớ (result/2) sang bit kế

```cpp
if (i >= 0) sum += a[i--] - '0';
if (j >= 0) sum += b[j--] - '0';
```
Phân tích code
a[i--] -'0' trong đó a[i] là kí tự ('1' hoặc '0'), trong bảng ASCII '0'=48, '1'=49 vì vậy a[i] - '0' sẽ chuyển thành số (0 hoặc 1)
VD:
```
'1' - '0' = 49 - 48 = 1  
'0' - '0' = 48 - 48 = 0
```
Với code 
  `carry = sum / 2;` // giữ phần dư
- Vì đang cộng số nhị phân (0 ||1) nên
 + Nếu sum=0 && sum=1 -> không nhớ
 + Nếu sum=2 || sum =3,... -> nhớ 1
   
   `result = char(sum % 2 + '0') + result;` //thêm vào đầu kết quả
- sum % 2 là chữ số cuối trong kết quả nhị phân
  + Nếu sum =0 -> bit =0
  + sum =1 -> bit = 1
  + sum =2 -> bit =0 ( vì 10)
  + sum =3 -> bit = 1 (vì 11)
- '0' để chuyển từ số thành kí tự
  + 0 + '0' = '0'
  + 1 + '0' = '1'
- + result cuối để thêm số/bit mới vào đầu kết quả vì đang duyệt từ phải -> trái
VD
```cpp
sum = 1 + 1 = 2
carry = 2 / 2 = 1
result = 2 % 2 = 0 → thêm '0' vào đầu chuỗi

result = "0"
```
Qua vòng lặp kế tiếp
```cpp
sum = 0 + 0 + carry = 1
carry = 1 / 2 = 0
result = 1 % 2 = 1 → thêm '1'

result = "10"
```
