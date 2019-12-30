## [Leetcode](https://leetcode.com/)

[21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) (`Linked Lists`)

- Time Complexity: O(m + n), m + n = number of elements in list 1 and list 2
- Space Complexity: O(1)

```java
public class ListNode
{
    int val;
    ListNode next;
    ListNode (int x) { val = x; }
    
    public static ListNode mergeTwoLists(ListNode l1, ListNode l2) {   
        if (l1 == null) return l2;
        if (l2 == null) return l1;
        
        ListNode sol = new ListNode(0);
        ListNode curr = sol;
        
        while (l1 != null && l2 != null)
        {
            if (l1.val <= l2.val)
            {
                curr.next = l1;
                l1 = l1.next;
            }
            else
            {
                curr.next = l2;
                l2 = l2.next;
            }
            
            curr = curr.next;
        }
        
        curr.next = l1 == null ? l2 : l1;
        
        return sol.next;
    }
}
```
