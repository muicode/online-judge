class ListNode
  attr_accessor :val, :next
  def initialize(val = 0, _next = nil)
    @val = val
    @next = _next
  end
end

def display(head)
  while head.next != nil
    print "#{head.val} -> "
    head = head.next
  end
  puts head.val
end

# runtime: 40ms, faster than 47.76%
# memory: 9.4 MB, < 100.00%
def merge_two_lists(l1, l2)
  list = ListNode.new(0)
  temp = list
  while l1 != nil and l2 != nil
    if l1.val <= l2.val
      temp.next = ListNode.new(l1.val)
      temp = temp.next
      l1 = l1.next
    elsif l1.val > l2.val
      temp.next = ListNode.new(l2.val)
      temp = temp.next
      l2 = l2.next
    end
  end

  while l1 != nil
    temp.next = ListNode.new(l1.val)
    temp = temp.next
    l1 = l1.next
  end

  while l2 != nil
    temp.next = ListNode.new(l2.val)
    temp = temp.next
    l2 = l2.next
  end

  list.next
end

# runtime: 32ms, faster than 95.77%
# memory: 9.6mb, < 100.00%
def merge_two_lists2(l1, l2)
  list = ListNode.new(0)
  temp = list
  while l1 != nil and l2 != nil
    if l1.val <= l2.val
      temp.next = ListNode.new(l1.val)
      temp = temp.next
      l1 = l1.next
    elsif l1.val > l2.val
      temp.next = ListNode.new(l2.val)
      temp = temp.next
      l2 = l2.next
    end
  end

  temp.next = l1

  while temp.next != nil
    temp = temp.next
  end
  temp.next = l2

  list.next
end

# runtime: 40ms, faster than 47.76%
# memory: 9.6 MB, < 100.00%
def merge_two_lists3(l1, l2)
  list = ListNode.new(0)
  temp = list
  while l1 != nil and l2 != nil
    if l1.val <= l2.val
      temp.next = l1
      temp = temp.next
      l1 = l1.next
    elsif l1.val > l2.val
      temp.next = l2
      temp = temp.next
      l2 = l2.next
    end
  end

  temp.next = l1

  while temp.next != nil
    temp = temp.next
  end
  temp.next = l2

  list.next
end

l1 = ListNode.new(1)
l1.next = ListNode.new(2)
l1.next.next = ListNode.new(3)

l2 = ListNode.new(4)
l2.next = ListNode.new(5)

display(l1)
display(l2)
display merge_two_lists(l1, l2)
display merge_two_lists2(l1, l2)
display merge_two_lists3(l1, l2)
