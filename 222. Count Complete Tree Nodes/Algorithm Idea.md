**Đề bài: Cho 1 cây nhị phân hoàn chỉnh, trả về số nút trong cây**
```
Input: root = [1,2,3,4,5,6]
Output: 6

Input: root = []
Output: 0

Input: root = [1]
Output: 1
```
**Ý tưởng*
- Xét điều kiện nếu root rỗng -> return 0
- Gọi đệ quy để tính số node bên trái và bên phải
- Trả về kết quả và +1 là node hiện tại nữa *return leftcount + rightcount +1*
**Minh họa cách chạy đệ quy đếm số node trong cây**
```cpp
int leftcount=countNodes(root->left);
int rightcount=countNodes(root->right);
```
- Giả sử có cây 
```
      1
     / \
    2   3
       / \
      4   5
```
- Cây con bắt đầu từ root = 1
root->left là node 2
root->right là node 3
- Gọi countNodes(1)
```cpp
int leftcount = countNodes(root->left);  // Gọi countNodes(2)
int rightcount = countNodes(root->right); // Gọi countNodes(3)
```
- Lúc gọi countNodes(3), lại đi đệ quy tiếp
countNodes(3):
```cpp
    leftcount = countNodes(4); // = 1 (vì 4 không có con)
    rightcount = countNodes(5); // = 1 (vì 5 không có con)
```
    => return 1 + 1 + 1 (node hiện tại, tức là số 3) = 3
==> rightcount = 3
Do cây con trái chỉ có số 2 ==> leftcount = 1
===> return leftcount + rightcount +1; = 1 + 3 + 1 (node hiện tại, số 1) = 5
