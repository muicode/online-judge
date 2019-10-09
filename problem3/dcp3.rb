###############################################################################
# 2019-09-20
###############################################################################
# DCP #3
#
# This problem was asked by Google.
#
# Given the root to a binary tree, implement serialize(root), 
# which serializes the tree into a string, and deserialize(s), 
# which deserializes the string back into the tree.
#
# For example, given the following Node class
# class Node:
#    def __init__(self, val, left=None, right=None):
#        self.val = val
#        self.left = left
#        self.right = right

# The following test should pass:
# 	node = Node('root', Node('left', Node('left.left')), Node('right'))
#	assert deserialize(serialize(node)).left.left.val == 'left.left'
###############################################################################

class Node
    attr_accessor :val, :left, :right

    def initialize(val, left=nil, right=nil)
        @val = val
        @left = left
        @right = right
    end
end

def serialize(node)
    if node == nil 
        return 'nil'
    end

    left_str = serialize(node.left)
    right_str = serialize(node.right)

    return "#{node.val} #{left_str} #{right_str}"
end

def deserialize(node)
    tokens = node.split(' ')

    des_helper tokens
end

def des_helper(tokens)
    current = tokens.first
    tokens.shift

    if current == 'nil'
        return nil
    end

    curr_node = Node.new(current)
    curr_node.left = des_helper(tokens)
    curr_node.right = des_helper(tokens)

    return curr_node
end

root = Node.new('root', Node.new('left', Node.new('left.left')), 
                     Node.new('right'))
sbt = serialize root
d_sbt = deserialize sbt

puts d_sbt.val == root.val
puts d_sbt.left.val == root.left.val
puts d_sbt.left.left.val == root.left.left.val
puts d_sbt.right.val == root.right.val
