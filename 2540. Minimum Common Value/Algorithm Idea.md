**Đề bài: Cho 2 mảng số nguyên sắp xếp tăng dần. Trả về số chung nhỏ  nhất của 2 mảng**
```
Input: nums1 = [1,2,3], nums2 = [2,4]
Output: 2
Explanation: The smallest element common to both arrays is 2, so we return 2.

Input: nums1 = [1,2,3,6], nums2 = [2,3,4,5]
Output: 2
Explanation: There are two common elements in the array 2 and 3 out of which 2 is the smallest, so 2 is returned.
```
**Ý tưởng**
- Dùng vòng lặp while để duyệt 2 mảng khi i<nums1.size() &&j<nums2.size() với i và j được gọi ban đầu là =0
  - Nếu tìm thấy số mà 2 mảng đều có -> return
  - Nếu số bên nums1 < nums2 -> tăng i
  - Nếu số bên nums1 > nums2 -> tăng j
- Kết thúc vòng while mà không tìm thấy số chung nhỏ nhất -> return -1
