/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#define Node struct ListNode

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {    
	int sizeA = 0;
	int sizeB = 0;
	Node *tempA = headA;
	Node *tempB = headB;

	while(tempA!=NULL && tempB!=NULL)
	{        
		tempA = tempA->next;
		tempB = tempB->next;
		++sizeA;
		++sizeB;
	}

	while(tempA) tempA = tempA->next, ++sizeA;
	while(tempB) tempB = tempB->next, ++sizeB;

	Node *large = headA;
	Node *small = headB;
	int lendiff = sizeA - sizeB;

	if(sizeA < sizeB) 
	{
		large=headB;
		small=headA;
		lendiff = ~lendiff + 1;
	}

	for(int i=0; i<lendiff; ++i) large = large->next;

	while(large != small && (large != NULL || small != NULL))
	{
		large = large->next;
		small = small->next;
	}

	return large;
}
