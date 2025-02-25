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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if (root == nullptr) {
            return ans;
        }

        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> list;

            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();

                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
                list.push_back(temp->val);
                q.pop();
            }
            ans.push_back(list);
        }
        return ans;
    }
};