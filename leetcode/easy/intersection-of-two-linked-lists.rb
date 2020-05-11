# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} headA
# @param {ListNode} headB
# @return {ListNode}

def get_count(head)
  curr = head
  count = 0

  while curr!=nil
    count += 1
    curr = curr.next
  end
  count
end

def _getIntersectionNode(d, head1, head2)
  curr1 = head1
  curr2 = head2

  for i in 0...d
    return -1 if curr1 == nil
    curr1 = curr1.next
  end

  while curr1 != nil and curr2 != nil
    if curr1 == curr2
      return curr1
    end

    curr1 = curr1.next
    curr2 = curr2.next
  end
  nil
end

# runtime: 192ms, faster than 5.49%
# memory: 13.6 MB, < 100.00%
def getIntersectionNode(headA, headB)
  c1 = get_count(headA)
  c2 = get_count(headB)

  if c1 > c2
    d = c1 - c2
    return _getIntersectionNode(d, headA, headB)
  else
    d = c2 - c1
    return _getIntersectionNode(d, headA, headB)
  end
end
