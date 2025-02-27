# 94. Binary Tree Inorder Traversal

Given the `root` of a binary tree, return the *inorder traversal of its nodes' values.*


**Example 1:**

> **Input:** root = [1,null,2,3] <br>
> **Output:** [1,3,2] <br>
> **Explanation:** <br>
>
> ![Tree img](https://assets.leetcode.com/uploads/2024/08/29/screenshot-2024-08-29-202743.png)

**Example 2:**

> **Input:** root = [1,2,3,4,5,null,8,null,null,6,7,9] <br>
> **Output:** [4,2,6,5,7,1,3,9,8] <br>
> **Explanation:**
>
> ![Tree img](https://assets.leetcode.com/uploads/2024/08/29/tree_2.png)

**Example 3:**

> **Input:** root = [] <br>
> **Output:** []

**Example 4:**

> **Input:** root = [1] <br>
> **Output:** [1]

<br>

**Constraints:**

- The number of nodes in the tree is in the range `[0, 100]`. <br>
- `-100 <= Node.val <= 100`
 

**Follow up:** Recursive solution is trivial, could you do it iteratively?