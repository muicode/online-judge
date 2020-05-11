# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val)
#         @val = val
#         @next = nil
#     end
# end

# @param {ListNode} head
# @return {Boolean}
#
# runtime: 44ms, faster than 67.91%
# memory: 9.5 MB, < 100.00%
def hasCycle(head)
  return false if head == nil or head.next == nil
  turtle = head.next
  heir = head.next.next

  while true
    return true if turtle == heir
    return false if turtle == nil
    turtle = turtle.next
    return false if heir == nil
    heir = heir.next
    return false if heir == nil
    heir = heir.next
  end
end

# runtime: 56ms, faster than 18.60%
# memory: 9.6 MB, < 100.00%
def hasCycle2(head)
  return false if head == nil or head.next == nil
  turtle = head
  hare = head

  while turtle != nil and hare != nil
    turtle = turtle.next
    hare = hare.next.next
		return true if turtle == hare
  end

  false
end

# runtime: 80ms, faster than 7.44%
# memory 10.1 MB, < 100.00%
def hasCycle3(head)
  hash = Hash.new()
  while head != nil
    return true if hash.include? head
    hash[head] = true
    head = head.next
  end
  false
end

