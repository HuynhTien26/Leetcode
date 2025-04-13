**Đề bài: Bạn được cung cấp một mảng chuỗi và một chuỗi, trong đó và chỉ bao gồm các chữ cái tiếng Anh viết thường. Trả về số lượng chuỗi trong đó là tiền tố của s. Tiền tố của chuỗi là một chuỗi con xuất hiện ở đầu chuỗi. Chuỗi con là một chuỗi các ký tự liền kề trong một chuỗi.**
```
Input: words = ["a","b","c","ab","bc","abc"], s = "abc"
Output: 3
Explanation:
The strings in words which are a prefix of s = "abc" are:
"a", "ab", and "abc".
Thus the number of strings in words which are a prefix of s is 3.

Input: words = ["a","a"], s = "aa"
Output: 2
Explanation:
Both of the strings are a prefix of s. 
Note that the same string can occur multiple times in words, and it should be counted each time.
```
**Ý tưởng**
- Dùng hàm for duyệt từng phần tử trong words và kiểm tra xem mỗi phần tử bắt đầu có khớp với từ tiền tố hay không.
**Giải thích**
```cpp
if (s.find(val) == 0) cnt++;
```
- s.find(val) tìm vị trí xuất hiện đầu tiên của val trong chuỗi s.
- Nếu vị trí này là 0, nghĩa là val xuất hiện ngay từ đầu, tức là val là tiền tố (prefix) của s.
- Nếu đúng, tăng biến đếm cnt lên 1.
- Ví dụ: tiền tố của chuỗi s là một chuỗi con nằm ở ngay đầu chuỗi s.
  Chuỗi s = "apple"
```
Các tiền tố (prefix) của "apple" gồm:
"a"
"ap"
"app"
"appl"
"apple"
```
Cụ thể là 
```
string s = "apple";
string val = "app";
```
*s.find(val) là "apple".find("app") → trả về 0*
Vì "app" xuất hiện bắt đầu từ vị trí đầu tiên, nên nó là tiền tố của "apple"
