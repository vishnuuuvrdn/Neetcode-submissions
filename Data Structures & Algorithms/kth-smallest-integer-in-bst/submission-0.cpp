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
    int kthSmallest(TreeNode* root, int k) {
        int res = -1;
        return ioTraverse(root, k, res);
    }
    int ioTraverse(TreeNode* curr, int& k, int& res){
        if(curr != nullptr){
            ioTraverse(curr->left, k, res);
            k--;
            if(k == 0) res = curr->val;
            ioTraverse(curr->right, k, res);
        }
        return res;
    }
};
