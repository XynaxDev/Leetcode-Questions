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
    int sumNumbers(TreeNode* root) {
        helper(root, "");
        return sum;
    }

    int helper(TreeNode* root, string str) {
        if (root == nullptr) {
            return 0;
        }
        str += to_string(root->val);

        if (!root->left && !root->right) {
            sum += stoi(str);
        }
        helper(root->left, str);
        helper(root->right, str);
        return sum;
    }
};