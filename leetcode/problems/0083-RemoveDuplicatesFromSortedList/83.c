/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
	struct ListNode *temp = head;

	if(head == NULL)
	{
		return NULL;
	}

	while(temp->next != NULL)
	{
		if(temp->next->val == temp->val)
		{
			struct ListNode *rmv = temp->next;
			temp->next = temp->next->next;
			free(rmv);
		}
		else
		{
			temp = temp->next;
		}
	}

	return head;
}
