**Đề bài: Cho 1 mảng sắp xếp theo thứ tự tăng dần, trả về giá trị lớn nhất giữa số âm và số dương, số 0 không được tính vào số âm hay số dương**
```
Input: nums = [-2,-1,-1,1,2,3]
Output: 3
Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.
//số lượng số âm = 3, số lượng số dương = 3 -> trả về 3 do cả 2 bằng nhau

Input: nums = [-3,-2,-1,0,0,1,2]
Output: 3
Explanation: There are 2 positive integers and 3 negative integers. The maximum count among them is 3.
//số âm có 3 số, số dương 2 số -> trả về 3 do số lượng số âm > số lượng số dương

Input: nums = [5,20,66,1314]
Output: 4
Explanation: There are 4 positive integers and 0 negative integers. The maximum count among them is 4.
```
**Ý tưởng**
- Dùng vòng lặp for duyệt từng phần tử trong mảng
  - if(nums[i] >0) soduong++;
  - if(nums[i] <0) soam++;
- return max(soam, so duong)
