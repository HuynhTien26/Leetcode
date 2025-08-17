Đề bài: Cho số nguyên num. Nếu num là một số chính phương thì trả về true, không thì trả về false

Input: num = 16
Output: true
Explanation: We return true because 4 * 4 = 16 and 4 is an integer.

Input: num = 14
Output: false
Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.

**Ý tưởng**

Lấy căn của num gán vào n rồi nhân n lại để xem == num không.
