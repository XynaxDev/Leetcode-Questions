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
    bool isValidBST(TreeNode* root) { return helper(root, LONG_MIN, LONG_MAX); }

    bool helper(TreeNode* root, long min, long max) {
        if (!root) {
            return true;
        }

        if (root->val <= min || root->val >= max) {
            return false;
        }
        return helper(root->left, min, root->val) &&
            helper(root->right, root->val, max);
    }
};

// we have to define a range of min and max value in which left subtree will be
// checked from min to root val and similarly in the right side as well