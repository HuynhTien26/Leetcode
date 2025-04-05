**Đề bài: Tính tổng các chữ số la mã**
```
Chú ý: IV=4 và IX=9  (V=5, X=10)
       XL=40 và XC=90 (L=50, C=100)
       CD=400 và CM=900 (D=500, M=1000)
```
```
Input: s = "III"
Output: 3
Explanation: III = 3.

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

**Ý tưởng**
- Gọi unordered_map <char, int> ...={} để lưu kí tự và giá trị của số la mã được cho
- Tạo hàm tổng, prev (số được xét trước đó, nằm bên phải chuỗi gốc), cur( số đang xét)
- Dùng vòng for duyệt ngược từ dưới lên, gán cur = roman[s[i]] (để duyệt từng phần tử từ dưới lên)
  ```cpp
        for(int i=s.size()-1;i>=0;i--){
        int cur =roman[s[i]];
  ```
  - Xét các điều kiện trong vòng for: **cur đứng trước prev**
     - Nếu cur > prev -> + (VI = 5 + 1 = 6)
     - Nếu cur = prev -> + (XX = 10 + 10 = 20)
     - Nếu cur < prev -> - (IV = 5 - 1 = 4)
