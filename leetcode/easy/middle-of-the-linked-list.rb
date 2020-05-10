# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} head
# @return {ListNode}
#
def length(head)
	size = 0
	while head != nil
    head = head.next
    size += 1
  end

  return size
end

# runtime: 36ms, faster than 15.84%
# memory: 9.3MB, <100.00%
def middle_node(head)
    size = length(head)
    size >>= 1

    for i in 0...size
      head = head.next
    end

    head
end

# runtime: 28ms, faster than 90.95%
# memory: 9.1 MB, < 100.00%
# space complxity is high though
def middle_node2(head)
  x = []
  while head != nil
    x.push(head)
    head = head.next
  end

  return x[x.size>>1]
end
