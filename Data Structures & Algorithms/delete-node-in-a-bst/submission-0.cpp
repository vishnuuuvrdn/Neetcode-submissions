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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr) return root;

        if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        else if(root->val < key){
            root->right = deleteNode(root->right, key);
        }
        else{
            if(!root->left && !root->right){
                return root = nullptr;
            }
            
            if(root->right && !root->left){
                return root = root->right;
            }

            if(root->left && !root->right){
                return root = root->left;
            }

            if(root->left && root->right){
                int temp = findMin(root->right);
                root->val = temp;
                root->right = deleteNode(root->right, root->val);
            }
        }

        return root;
    }

    int findMin(TreeNode* root){
        while(root->left != nullptr){
            root = root->left;
        }

        return root->val;
    }
};