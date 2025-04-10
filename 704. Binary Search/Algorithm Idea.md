**Đề bài: Cho mảng nums, số target là số cần tìm. Tìm target trong nums, nếu thấy trả về vị trí, nếu không thấy trả về -1**
```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
```
**Ý tưởng**
- Gọi l, r để duyệt trong mảng
- Tính vị trí chính giữa của mảng là m, gọi vòng lặp while(l<=r)
  - Nếu m==target -> return m
  - Nếu m < target -> l=m+1
  - Nếu m > targer -> r=m-1
- Kết thúc vòng while nếu không thấy target -> return -1;
