=begin
Runtime: 56 ms, faster than 90.48% of Ruby online submissions for Serialize and Deserialize BST.
Memory Usage: 12.3 MB, less than 100.00% of Ruby online submissions for Serialize and Deserialize BST.
=end

# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val)
#         @val = val
#         @left, @right = nil, nil
#     end
# end

# Encodes a tree to a single string.
def serialize(root)
    if root == nil
        return 'x'
    end
    
    left = serialize(root.left)
    right = serialize(root.right)
    
    return "#{root.val} #{left} #{right}"
end

# Decodes your encoded data to tree.
def deserialize(data)
    tokens = data.split(' ')
    deserialize_helper tokens
end

def deserialize_helper(data)
    current = data.shift
    
    if current == 'x'
        return nil
    end
    
    root = TreeNode.new(current)
    root.left = deserialize_helper(data)
    root.right = deserialize_helper(data)
    
    return root
end
