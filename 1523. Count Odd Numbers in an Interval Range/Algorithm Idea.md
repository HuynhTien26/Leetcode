**Đề bài: Cho 2 số nguyên không âm. Trả về số lượng số lẻ ở giữa 2 số đó (có thể bao gồm 2 số đề cho nếu nó lẻ)**
```
Input: low = 3, high = 7
Output: 3
Explanation: The odd numbers between 3 and 7 are [3,5,7].

Input: low = 8, high = 10
Output: 1
Explanation: The odd numbers between 8 and 10 are [9].
```
**Ý tưởng**

**Cách 1**
- Tạo biến đếm cnt=0
- Dùng vòng lặp for(int i=low;i<=high;i++) rồi duyệt với điều kiện if (i%2 != 0){ nếu đúng cnt++
*Cách này khá tốn thời gian chạy khi phải duyệt trong vòng lặp rồi đến điều kiện (tốn 1719ms)*

**Cách 2**
- Trả về luôn *return (high + 1) / 2 - low / 2;*
- Trong đó *(high + 1) /2* là số **lượng số lẻ từ 1 đến high**
- *low/2* là số số lẻ từ 1 đến low - 1

 **Minh họa cho cách 2**
 - Do số lẻ và số chẵn luôn đan xen nhau trong dãy số nên:
   - Nếu n là số lẻ : 1,3,5,...n -> tổng số lẻ là n/2 +1.
   Ví dụ n=7 -> 7/2 + 1 =4 số lẻ (1,3,5,7)
   - Nếu n là số chẵn, thì số lẻ sẽ là 1,3,5,...n-1 -> tổng số lẻ là n/2
   Ví dụ n=6 -> 6/2=3 số lẻ (1,3,5)
==> giải thich cho *(high + 1)/2*

- Giải thích cho *low/2*
Viết low/2 tức là đang tính số chẵn từ 1 đến low-1. Mà số lẻ và chăn luôn đan xen nhau
Ví dụ: low=7
-> low - 1= 7-1 = 6 (1,2,3,4,5,6)
  Sô chẵn 2,4,6 -> có 3 số chẵn, số lẻ 1,3,5 -> 3 số lẻ
==> low/2 =7/2=3 vậy có 3 số lẻ
