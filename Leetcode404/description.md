# 404. Sum of left leaves

Given the `root` of a binary tree, return *the sum of all left leaves*.

A **leaf** is a node with no children. A **left leaf** is a leaf that is the left child of another node.

**Example 1:**

![Tree img](https://assets.leetcode.com/uploads/2021/04/08/leftsum-tree.jpg)

> **Input:** root = [3,9,20,null,null,15,7] <br>
**Output:** 24 <br>
**Explanation:** There are two left leaves in the binary tree, with values 9 and 15 respectively.

**Example 2:**

> **Input:** root = [1] <br>
**Output:** 0
 
<br>

**Constraints:**
- The number of nodes in the tree is in the range `[1, 1000]`.
- `-1000 <= Node.val <= 1000`