typedef struct MyLinkedList {
	int val;
	int size;
	struct MyLinkedList *next;
} MyLinkedList;

#define Node MyLinkedList

/** Initialize your data structure here. */

MyLinkedList* myLinkedListCreate() {
	Node *list = malloc(sizeof(*list));
	list->val = 0;
	list->size = 0;
	list->next = NULL;

	return list;
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int myLinkedListGet(MyLinkedList* obj, int index) {
    if(obj == NULL) return -1;
    const int SIZE = obj->size;
    
    if(SIZE<=0 || index<0 || index >= SIZE)
    {
        return -1;
    }
    
    Node *temp = obj;
    while(index--)
    {
        temp = temp->next;
    }
    
    return (temp->next) ? temp->next->val : -1;
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    Node *dummy = obj;
    
    Node *newNode = malloc(sizeof(*newNode));
    newNode->val = val;
    newNode->next = dummy->next;
    dummy->next = newNode;

    ++obj->size;
}

/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    Node *dummy = obj;
    
    while(dummy->next != NULL)
    {
        dummy = dummy->next;
    }
    
    Node *newNode = malloc(sizeof(*newNode));
    newNode->val = val;
    newNode->next = NULL;
    dummy->next = newNode;
    
    ++obj->size;
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if(index == 0 || index == -1) myLinkedListAddAtHead(obj, val);
    else if(index == obj->size) myLinkedListAddAtTail(obj, val);
    else if(index>0 && index<obj->size)
    {
        Node *temp = obj;
        while(index--)
        {
            temp = temp->next;
        }
        
        Node *newNode = malloc(sizeof(*newNode));
        newNode->val = val;
        newNode->next = temp->next;
        temp->next = newNode;
        
        ++obj->size;
    }
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if(obj!=NULL && index>=0 && index<obj->size)
    {
        Node *temp = obj;
        
        while(index--)
        {
            temp = temp->next;
        }
        
        Node *nodeToDelete = temp->next;
        temp->next = temp->next->next;
        free(nodeToDelete);
        nodeToDelete = NULL;
        
        --obj->size;
    }
}

void myLinkedListFree(MyLinkedList* obj) {
    while(obj)
    {
        Node *temp = obj;
        obj = obj->next;
        free(temp);
    }
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/
