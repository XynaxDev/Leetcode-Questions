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
    int sum = 0;

    int sumOfLeftLeaves(TreeNode* root) {
        helper(root, false);
        return sum;
    }

    int helper(TreeNode* root, bool isLeft) {
        if (!root) return 0;

        if (!root->left && !root->right && isLeft) {
            sum += root->val;
        }

        helper(root->left, true);
        helper(root->right, false);
        return sum;
    }
};