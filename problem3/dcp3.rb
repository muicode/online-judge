class Node
  attr_accessor :val, :left, :right

  def initialize(val, left=nil, right=nil)
    @val = val
    @left = left
    @right = right
  end
end

def serialize(root)
  vals = []
  encode = ->(node, vals) {
    if node == nil
      vals.push('x')
    else
      vals.push(node.val)
      encode.call(node.left, vals)
      encode.call(node.right, vals)
    end
  }

  return (encode.call(root, vals)).join(' ')
end

def deserialize(serialized_str)
  vals = serialized_str.split()
  decode = -> (vals) {
    data = vals.shift

    if data == 'x'
      return nil
    end

    node = Node.new(data)
    node.left = decode.call(vals)
    node.right = decode.call(vals)
    return node  
  }

  return decode.call(vals)
end

root = Node.new('root', Node.new('left', Node.new('left.left')), Node.new('right'))
puts deserialize(serialize(root)).left.left.val
