/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#define Node struct ListNode

struct ListNode* removeElements(struct ListNode* head, int val) {
	while(head && head->val == val)
	{
		Node *temp = head;
		head = head->next;
		free(temp);
	}

	Node *cur = head;
	while(cur && cur->next != NULL)
	{
		if(cur->next->val == val)
			cur->next = cur->next->next;
		else
			cur = cur->next;
	}

	return head;
}
