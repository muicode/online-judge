# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
# @param {ListNode} head
# @return {Integer}
#
# runtime: 36ms, faster than 45.90%
# memory: 9.4 MB < 100.00%
def get_decimal_value(head)
  ret = 0
  while head != nil
    ret = ret * 2 + head.val
    head = head.next
  end

  ret
end

# runtime: 28ms, faster than 95.08%
# memory: 9.3 MB, <100.00%
def get_decimal_value(head)
  # ...
    ret = (ret << 1) + head.val
  # ...
end
