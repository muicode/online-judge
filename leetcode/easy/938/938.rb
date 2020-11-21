# Runtime: 168 ms, faster than 50.82%
# Memory Usage: 214.5 MB, less than 73.77%
#
# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val = 0, left = nil, right = nil)
#         @val = val
#         @left = left
#         @right = right
#     end
# end
# @param {TreeNode} root
# @param {Integer} low
# @param {Integer} high
# @return {Integer}
def range_sum_bst(root, low, high)
  return 0 if root == nil
  sum = 0

  sum = root.val if (root.val >= low and root.val <= high)
  sum += range_sum_bst(root.left, low, high) if root.val > low    
  sum += range_sum_bst(root.right, low, high) if root.val < high

  sum
end
