/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> set; //khai báo tập hợp set để lưu các node đã duyệt, hỗ trợ tìm kiếm nhanh với độ phức tạp O(1)
        return findTarget(root, k, set);} //gọi đệ quy để tìm kiếm trong cây
private:
    bool findTarget(TreeNode* root, int k, unordered_set<int>& set ) { //gọi tham chiếu cho set để cập nhật chung giữa các lời gọi đệ quy
        if (root == NULL) return false; //nếu node là rỗng ->false
        else if (set.find(k - root->val)!= set.end()) //ktr k -root->val đã có trong set chưa.
//Giả sử có số x, nếu k-x đã tồn tại trong set thì số y=k-x có trong cây
        return true;
        set.insert(root->val); //thêm các giá trị hiện tại vào unordered_set<int> set để sử dụng trong các lần duyệt kế
        return findTarget(root->left, k, set) || findTarget(root->right, k, set); //tìm kiếm tiếp ở cây con bên trái và cây con bên phải, || giúp dừng tìm kiếm sớm nếu 1 nhánh trả về true
    }  
};
