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
# @return {Integer}
def max_depth(root)
	return 0 if root == nil
 
	left_height = get_height(root.left)
	right_heigt = get_height(root.right)
	return [left_height, right_height].max
end

def get_height(node)
	h = 0
	if node != nil
    left = height(node.left)
    right = height(node.right)
    max_height = [left,right].max
    h = max_height + 1
	end

  h
end
