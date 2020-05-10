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

# runtime: 44ms, 21.88%
# memory: 9.5 MB, <100.00%
def delete_duplicates(head)
    return [] if !head
    ret = head
    curr = head.next
    while curr != nil
        if head.val != curr.val
            head.next = curr
            head = head.next
        end
        curr = curr.next
    end
    head.next = nil
    ret
end
