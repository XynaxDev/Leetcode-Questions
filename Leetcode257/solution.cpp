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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        helper(root, "", ans);
        return ans;
    }

    void helper(TreeNode* root, string str, vector<string>& ans) {
        if (!root) {
            return;
        }

        str += to_string(root->val);
        if (!root->left && !root->right) {
            ans.push_back(str);
            return;
        }

        str += "->";
        helper(root->left, str, ans);
        helper(root->right, str, ans);
    }
};