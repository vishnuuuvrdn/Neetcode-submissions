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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty()) return nullptr;

        TreeNode* root = new TreeNode(preorder[0]);

        int mid;
        for(int i = 0; i < inorder.size(); i++){
            if(preorder[0] == inorder[i]){
                mid = i;
                break;
            }
        }

        vector<int> leftPre;
        vector<int> leftIn;
        for(int i = 0; i < mid; i++){
            leftPre.push_back(preorder[i+1]);
            leftIn.push_back(inorder[i]);
        }

        vector<int> rightPre;
        vector<int> rightIn;
        for(int i = mid+1; i < inorder.size(); i++){
            rightPre.push_back(preorder[i]);
            rightIn.push_back(inorder[i]);
        }

        root->left = buildTree(leftPre, leftIn);
        root->right = buildTree(rightPre, rightIn);

        return root;
    }
};
