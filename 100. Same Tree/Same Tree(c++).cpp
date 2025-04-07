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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p!=NULL && q==NULL || p==NULL && q!=NULL) return false;
        if(p==NULL && q==NULL) return true;
        return (p->val ==q->val)&& //gốc giống nhau
    /*gọi đệ quy cho cây con trái phải của p và q
    câu lệnh dưới nghĩa là cây con trái của p phải giống hoàn toàn cây con trái của q, tương tự với cây con phải  */    
        isSameTree(p->left, q->left)&&
        isSameTree(p->right, q->right);
    }
};
