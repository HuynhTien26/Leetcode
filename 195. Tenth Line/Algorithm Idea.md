**Đề bài: In ra dòng thứ 10 trong file text**
```
Assume that file.txt has the following content:

Line 1
Line 2
Line 3
Line 4
Line 5
Line 6
Line 7
Line 8
Line 9
Line 10
Your script should output the tenth line, which is:

Line 10
```
**Ý tưởng**
- Dùng awk trong Linux để đọc rồi in ra kết quả

**Giải thích**
- *'NR == 10'*
  - NR là viết tắt của Number of Record, tức là số thứ tự dòng hiện tại
  - NR == 10 có nghĩa là: chỉ khi đang đọc đến dòng thứ 10 thì mới thực hiện hành động mặc định, tức là in ra dòng đó.
