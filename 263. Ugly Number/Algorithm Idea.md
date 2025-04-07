**Đề bài: Một số xấu xí là một số nguyên dương không có thừa số nguyên tố nào khác ngoài 2, 3 và 5**
```
Input: n = 6
Output: true
Explanation: 6 = 2 × 3

Input: n = 1
Output: true
Explanation: 1 has no prime factors.

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
```
**Ý tưởng**
Dùng vòng lặp while để loại bỏ các số chia hết cho 2,3,5 nếu cuối cùng n==1 thì return true, không thì return false
VD:
Trường hợp 1: n = 30
30 → chia 2 → 15
15 → chia 3 → 5
5 → chia 5 → 1
==>n==1 return true
