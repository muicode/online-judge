# Runtime: 96 ms, faster than 7.00%
# Memory Usage: 210.4 MB, less than 37.74%

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
  prev = nil
  curr = head

  while(curr != nil) do
    temp = curr.next
    curr.next = prev
    prev = curr
    curr = temp
  end

  return prev
end
