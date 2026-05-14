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
    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }

    int dfs(TreeNode* curr, int maxVal){
        if(curr == nullptr) return 0;

        int cnt = 0;
        if(curr->val >= maxVal) cnt++;

        maxVal = max(maxVal, curr->val);

        cnt += dfs(curr->left, maxVal);
        cnt += dfs(curr->right, maxVal);

        return cnt;
    }
};
