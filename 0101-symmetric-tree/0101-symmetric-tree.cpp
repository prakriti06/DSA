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
    bool isSymmetric(TreeNode* root) {
        if(not root) 
            return true; 
        return isSymmetric(root->left,root->right);
    }
    
    bool isSymmetric(TreeNode* p , TreeNode* q){
        if(not p and not q)  
            return true; 
        if(not p || not q) 
            return false; 
        
        if(p->val!=q->val) 
            return false;
        
        return isSymmetric(p->left,q->right) and isSymmetric(p->right,q->left);
    }
};