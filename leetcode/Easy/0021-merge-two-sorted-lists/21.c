/*
 * Time Complexity: O(len(l1+l2))
 * Space Complexity: O(len(l1+l2))
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	ListNode *mergedList = malloc(sizeof(struct ListNode));
	ListNode *tail = mergedList;

	while(true)
	{
		if(l1 == NULL)
		{
			tail->next = l2;
			break;
		}
		else if(l2 == NULL)
		{
			tail->next = l1;
			break;
		}

		if(l1->val < l2->val)
		{
			tail->next = malloc(sizeof(struct ListNode));
			tail = tail->next;
			tail->val = l1->val;

			ListNode *temp = l1;
			l1 = l1->next;
			free(temp);
		}
		else
		{
			tail->next = malloc(sizeof(struct ListNode));
			tail = tail->next;
			tail->val = l2->val;

			ListNode *temp = l2;
			l2 = l2->next;
			free(temp);
		}
	}

	ListNode *temp = mergedList;
	mergedList = mergedList->next;
	free(temp);
	return mergedList;
}
