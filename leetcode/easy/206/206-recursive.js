/**
 * Runtime: 120 ms, faster than 5.15%
 * Memory Usage: 40.7 MB, less than 37.74%
 */

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var reverseList = function(head) {
  if (head == null || head.next == null) return head;

  let p = reverseList(head.next);
  head.next.next = head;
  head.next = null;
  return p;
};
