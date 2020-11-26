# Runtime: 52 ms, faster than 83.27%
# Memory Usage: 210.7 MB, less than 15.56%

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
def reverse_list(head)
  return head if head==nil or head.next==nil

  p = reverse_list(head.next)
  head.next.next = head
  head.next = nil
  p
end
