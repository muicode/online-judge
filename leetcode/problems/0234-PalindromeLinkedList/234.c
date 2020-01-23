/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#define Node struct ListNode

Node* reverse(Node *list)
{
	Node *p, *q, *r;
	p = list;
	q = NULL;

	while(p != NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}

	return q;
}

bool isPalindrome(struct ListNode* head){
	if(head==NULL || head->next==NULL) return 1;

	int size = 0;
	Node *temp = head;

	while(temp)
	{
		temp = temp->next;
		++size;
	}

	size >>= 1;

	temp = head;
	for(int i=0; i<size; ++i) 
		temp = temp->next;

	Node *test = reverse(temp);
	for(int i=0; i<size; ++i)
	{
		if(head->val != test->val) return 0;
		head = head->next;
		test = test->next;
	}

	return 1;
}


