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
# @param {Integer} l
# @param {Integer} r
# @return {Integer}

# runtime: 128ms, faster than 67.50%
# memory: 13.4 MB, < 100.00%
def range_sum_bst(root, l, r)
    q = [root]
    
    sum = 0
    while !q.empty?
        c = q.shift
        sum += c.val if c.val >=l and c.val <= r
        
        q.push(c.left) if c.left
        q.push(c.right) if c.right
    end
    
    sum
end
