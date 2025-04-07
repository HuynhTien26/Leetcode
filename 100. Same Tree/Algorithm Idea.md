**Đề bài: cho 2 cây nhị phân. Kiểm tra 2 cây có giống nhau không, nếu giống trả về true, không thì trả về false**
```
Input: p = [1,2,3], q = [1,2,3]
Output: true

Input: p = [1,2], q = [1,null,2]
Output: false

Input: p = [1,2,1], q = [1,1,2]
Output: false
```
**Ý tưởng**
- Kiểm tra các điều kiện
  - Cây p rỗng, q không rỗng || p không rỗng, q rỗng -> return false
  - Cây p và q cùng rỗng -> return true
  - Nếu 2 cây không rỗng:
    - `(p->val == q->val)` hai gốc (root) hiện tại phải giống nhau
    - Không chỉ cần 2 root giống nhau mà cả cây con trái và phải cũng đều phải hoàn toàn giống nhau
    `isSameTree(p->left, q->left) && isSameTree(p->right, q->right);`
- Cả hai điều kiện (trái giống trái và phải giống phải) đều phải đúng thì kết quả mới là true
- Nếu chỉ một bên không giống (hoặc cả hai bên không giống), kết quả sẽ là false
