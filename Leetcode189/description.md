# 189. Rotate Array

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

**Example 1:**

>**Input:** nums = [1,2,3,4,5,6,7], k = 3 <br>
**Output:** [5,6,7,1,2,3,4] <br>
**Explanation:** <br>
rotate 1 steps to the right: [7,1,2,3,4,5,6]<br>
rotate 2 steps to the right: [6,7,1,2,3,4,5] <br>
rotate 3 steps to the right: [5,6,7,1,2,3,4]

**Example 2:**

> **Input:** nums = [-1,-100,3,99], k = 2 <br>
**Output:** [3,99,-1,-100] <br>
**Explanation:** <br>
rotate 1 steps to the right: [99,-1,-100,3] <br>
rotate 2 steps to the right: [3,99,-1,-100]
 
<br>

**Constraints:**

- `1 <= nums.length <= 10⁵`
- `-2³¹ <= nums[i] <= 2³¹ - 1`
- `0 <= k <= 10⁵`