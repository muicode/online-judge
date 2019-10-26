class Node
    attr_reader :val
    attr_accessor :npx

    def initialize data
        @val = data
        @npx = 0
    end
end

class XORLinkedList
    attr_reader :root, :tail, :nodes

    def initialize data
        @root = Node.new(data)
        @nodes = 1
    end

    def add element
        new_node = Node.new(element)

        if @root.npx == 0
            @root.npx = get_pointer(new_node)
            new_node.npx = get_pointer(@root)
        elsif
            curr_node = deref_pointer(@root.npx)
            prev_addr = get_pointer(@root)
            
            while curr_node.npx != prev_addr
                next_node = deref_pointer(curr_node.npx ^ prev_addr)
                prev_addr = get_pointer(curr_node)
                curr_node = next_node
            end

            new_node.npx = get_pointer(curr_node)
            curr_node.npx = prev_addr ^ get_pointer(new_node)
        end

        @nodes += 1
    end

    def get(index)
        if index == 0
            return @root.val
        end

        curr = deref_pointer(@root.npx)
        prev_addr = get_pointer(@root)

        for i in (1 ... index) do
            next_node = deref_pointer(prev_addr ^ curr.npx)   
            prev_addr = get_pointer(curr)
            curr = next_node
        end

        curr.val
    end
end

def get_pointer(node)
    node.object_id
end

def deref_pointer(node_addr)
    ObjectSpace._id2ref(node_addr)
end

list = XORLinkedList.new("A")
list.add("B")
list.add("C")
list.add("D")
list.add("E")

puts list.get(0)
puts list.get(1)
puts list.get(2)
puts list.get(3)
puts list.get(4)
