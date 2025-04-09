**Đề bài: Cho 2 chuỗi kí tự s và t, trả về kí tự dư thừa/khác nhau giữa 2 chuỗi**
```
Input: s = "abcd", t = "abcde"
Output: "e"
Explanation: 'e' is the letter that was added.

Input: s = "", t = "y"
Output: "y"
```
**Ý tưởng**
- Duyệt từng ký tự trong s và t, dùng phép tính giữa các ký tự để gộp toàn bộ sự chênh lệch (khác biệt) lại về cuối chuỗi t.
- Ký tự còn lại sau tất cả các phép tính chính là ký tự bị thêm vào.
**Minh họa**
```cpp
t[i+1] = t[i+1] + (t[i] - s[i])
```
- Nếu t[i]==s[i] => không thay đổi gì (+0) do lấy *t[i] - s[i]*
- Nếu có sự khác biệt -> được cộng dồn qua t[i+1]
- Qua từng vòng lặp toàn bộ chuỗi s và t sẽ triệt tiêu dần những phần giống nhau
Ví dụ với: 
s = "a b c d";    => khác nhau ở e cuối
t = "a b c d e";
```
i     s[i]    t[i]       t[i+1] (ban đầu)         Tính toán                      t[i+1] (sau khi cộng)
0     'a'      'a'             'b'                'b' = 'b' + ('a' - 'a')=0                'b'
1     'b'      'b'             'c'                'c' = 'c' + ('b' - 'b')=0                'c'
2     'c'      'c'             'd'                'd' = 'd' + ('c' - 'c')=0                'd'
3     'd'      'd'             'e'                'e' = 'e' + ('d' - 'd')=0                'e'
```
- Vòng lặp dừng ở i=3 => không có vòng lặp i=4 để triệt tiêu e => e là phần tử dư thừa

**Chạy thử với e nằm ở giữa**
s = "a b c d"
t = "a c b e d" 
'a'=97
'b'=98
'c'=99
'e'=101
```
i     s[i]    t[i]       t[i+1] (ban đầu)         Tính toán                      t[i+1] (sau khi cộng)
0     'a'      'a'             'c'                'c' = 'c' + ('a' - 'a')=0                'c'
                                                      //99+(97-97)= 99                      99
1     'b'      'c'             'b'                'b' = 'b' + ('c' - 'b')=1                'c'
                                                     // 98 + (99-98) = 99                   99 
2     'c'      'c'             'e'                'e' = 'e' + ('c' - 'c')=0                'e'
              //^ do được thay đổi từ trước          // 101 + (99-99) = 101                101
3     'd'      'e'             'd'                'd' = 'd' + ('e' - 'd')=0                'e'
                                                     //100 + (101 -100) = 101              101
```
