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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        if(root == nullptr) return newNode;
        helper(root, newNode);

        return root;
    }

    void helper(TreeNode* curr, TreeNode* newNode){
        if(curr == nullptr) return;

        if(curr->val > newNode->val && curr->left == nullptr){
            curr->left = newNode;
            return;
        }

        if(curr->val < newNode->val && curr->right == nullptr){
            curr->right = newNode;
            return;
        }

        if(curr->val > newNode->val)
            helper(curr->left, newNode);
        if(curr->val < newNode->val)
            helper(curr->right, newNode);
    }
};