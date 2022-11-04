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
    bool traverse(TreeNode* p, TreeNode* q){
    if (not p or not q)
            return p == nullptr && q == nullptr;
        return traverse(p->left, q->right) and p->val == q->val and traverse(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return traverse(root->left, root->right);
    }
};