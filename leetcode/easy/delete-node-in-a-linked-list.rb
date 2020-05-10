# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} node
# @return {Void} Do not return anything, modify node in-place instead.

# runtime: 36ms, faster than 65.18%
# memory: 9.4 MB, < 100.00%
def delete_node(node)
    while node.next.next != nil
        node.val = node.next.val
        node = node.next
    end
    node.val = node.next.val
    node.next = nil
end
