/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
	if(head==NULL) return 0;
	if(head->next == NULL) return 0;
	if(head == head->next) return 1;

	struct ListNode *kame = head;
	struct ListNode *usagi = head;

	kame = kame->next;
	usagi = usagi->next->next;

	while(kame != usagi && kame != NULL && usagi != NULL)
	{
		kame = kame->next;
		usagi = usagi->next;
		if(usagi == NULL) return 0;
		else usagi = usagi->next;
	}

	if(kame == NULL || usagi == NULL) return 0;
	return 1;    
}
