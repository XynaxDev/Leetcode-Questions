# 450. Delete Node in a BST

Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the ***root** node reference (possibly updated) of the BST*.

Basically, the deletion can be divided into two stages:

1. Search for a node to remove.
2. If the node is found, delete the node.

<br>

**Example 1:**

![Tree](https://assets.leetcode.com/uploads/2020/09/04/del_node_1.jpg)

> **Input:** root = [5,3,6,2,4,null,7], key = 3 <br>
**Output:** [5,4,6,2,null,null,7] <br>
**Explanation:** Given key to delete is 3. So we find the node with value 3 and delete it. <br>
One valid answer is [5,4,6,2,null,null,7], shown in the above BST. <br>
Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.
>
>![tree](https://assets.leetcode.com/uploads/2020/09/04/del_node_supp.jpg)

**Example 2:**

>**Input:** root = [5,3,6,2,4,null,7], key = 0 <br>
**Output:** [5,3,6,2,4,null,7] <br>
**Explanation:** The tree does not contain a node with value = 0.

**Example 3:**

>**Input:** root = [], key = 0 <br>
**Output:** []

<br>

**Constraints:**

- The number of nodes in the tree is in the range `[0, 10⁴]`.
- `-10⁵ <= Node.val <= 10⁵`
- Each node has a **unique** value.
- `root` is a valid binary search tree.
- `-10⁵ <= key <= 10⁵`
 
<br>

**Follow up:** Could you solve it with time complexity `O(height of tree)`?