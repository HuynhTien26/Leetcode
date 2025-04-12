**Đề bài: Viết một hàm đảo ngược một chuỗi. Chuỗi đầu vào được đưa ra dưới dạng một mảng ký tự s. Bạn phải làm điều này bằng cách sửa đổi mảng đầu vào tại chỗ với bộ nhớ bổ sung.O(1)**
```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```
**Ý tưởng**
- Dùng hàm swap để hoán đổi từng phần tử, bắt đầu từ đầu và cuối chuỗi (gọi l và r)
