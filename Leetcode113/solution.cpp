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
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> list;
        helper(root, targetSum, list);
        return ans;
    }
    void helper(TreeNode* root, int targetSum, vector<int>& list) {
        if (root == nullptr) {
            return;
        }

        list.push_back(root->val);

        if (!root->left && !root->right && targetSum == root->val) {
            ans.push_back(list);
        }
        helper(root->left, targetSum - root->val, list);
        helper(root->right, targetSum - root->val, list);

        list.pop_back();
    }
};