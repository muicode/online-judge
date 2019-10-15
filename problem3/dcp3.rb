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
