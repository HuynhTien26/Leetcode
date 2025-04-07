**Đề bài: trả về tất cả các tổ hợp ký tự có thể tạo thành từ các chữ số trên bàn phím điện thoại**
```
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Input: digits = ""
Output: []

Input: digits = "2"
Output: ["a","b","c"]
```
**Ý tưởng**
**C1**
- Sử dụng **hàng đợi** để lưu các chữ cái
- Dùng unordered _map <> pad để sao lưu kí tự chữ số và chữ cái của nó
- Duyệt qua từng chữ số trong digits
- Sau khi duyệt hết các chữ số, queue sẽ chứa các tổ hợp chữ cái cần thiết
- Lấy tất cả chuỗi từ queue và thêm vào 1 vector<string> để trả về kết quả
**C2**
- Dùng một mảng tạm thời temp để lưu kết quả sau mỗi vòng lặp rồi gán vào result
- Sau đó dùng 2 for lồng nhau để kết hợp từng kí tự lại
```cpp
for (char digit : digits) { (a)
        vector<string> temp;
        for (string s : result) { (b)
            for (char c : pad[digit]) { (c)
                temp.push_back(s + c); (d)
            }
        }
        result = temp;
    }
```
**Chạy tay cho code trên**
Cho digits="23"
result={""};
- Vòng 1: *(a)* Với digit = '2'
Vòng lặp ngoài result={""}; => *(b)* s = ""
*(c,d)* 
 - c = 'a': "" + 'a' = "a", thêm vào temp: temp = {"a"}
 - c = 'b': "" + 'b' = "b", thêm vào temp: temp = {"a", "b"}.
 - c = 'c': "" + 'c' = "c", thêm vào temp: temp = {"a", "b", "c"}.
=> Kết thúc vòng lặp --> result = {"a", "b", "c"}

- Vòng 2: *(a)* Với digit = '3'
Vòng lặp ngoài: result = {"a", "b", "c"}
*(b)* Vòng lặp trong (với s="a")
 - c = 'd': "a" + 'd' = "ad", thêm vào temp: temp = {"ad"}
 - c = 'e': "a" + 'e' = "ae", thêm vào temp: temp = {"ad", "ae"}
 - c = 'f': "a" + 'f' = "af", thêm vào temp: temp = {"ad", "ae", "af"}
Vòng lặp trong (với s = "b")
 - c = 'd': "b" + 'd' = "bd", thêm vào temp: temp = {"ad", "ae", "af", "bd"}
 - c = 'e': "b" + 'e' = "be", thêm vào temp: temp = {"ad", "ae", "af", "bd", "be"}
 - c = 'f': "b" + 'f' = "bf", thêm vào temp: temp = {"ad", "ae", "af", "bd", "be", "bf"}
Tương tự với vòng lặp trong (với s = "c")
Sau khi vòng lặp này hoàn thành, result = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"}
