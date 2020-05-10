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
# runtime: 40ms, faster than 27.83%
# memory: 9.9 MB, < 100.00%
def reverse_list(head)
  return head if head == nil or head.next == nil

  rest = reverse_list(head.next)
  head.next.next = head

  head.next = nil

  rest
end
