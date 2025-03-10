/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxval(TreeNode* root) {
        if (root->right) {
            return maxval(root->right);
        }
        return root->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) {
            return nullptr;
        }

        if (root->val > key) {
            root->left = deleteNode(root->left, key);
        }
        else if (root->val < key) {
            root->right = deleteNode(root->right, key);
        }
        else {
            if (root->left && root->right) {
                int lmax = maxval(root->left);
                root->val = lmax;
                root->left = deleteNode(root->left, lmax);
            }
            else {
                return root->left ? root->left : root->right;
            }
        }
        return root;
    }
};
