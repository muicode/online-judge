## 문제
- [5397번 키로거](https://www.acmicpc.net/problem/5397)

## C
```cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 1000001

typedef signed char schar;

typedef struct Node
{
	schar data;
	struct Node *next;
	struct Node *before;
} Node;

typedef struct StackList
{
	int nElem;
	Node *head;
	Node *tail;
} StackList;

StackList* init( void );
void push( StackList *, const schar );
schar pop( StackList * );
schar lstack_front( StackList * );
int lstack_test_main( void );

int main(int argc, char **argv)
{
	int t;

	scanf("%d", &t);

	while(t--)
	{
		schar str[LEN];
		StackList *L = init();
		StackList *T = init();
		scanf("%s", str);

		for(int i=0; str[i]; ++i)
		{
			if(str[i]=='<')
			{
				if(L->nElem != 0)
					push(T, pop(L));
				else
					continue;
			}
			else if(str[i]=='>')
			{
				if(T->nElem != 0)
					push(L, pop(T));
				else
					continue;
			}	
			else if(str[i]=='-')
			{
				if(L->nElem != 0)
					pop(L);
				else
					continue;
			}
			else
			{
				push(L, str[i]);
			}
		}
		while(L->nElem != 0)
			printf("%c", lstack_front(L));

		while(T->nElem != 0)
			printf("%c", pop(T));
		printf("\n");
	}

	return 0;
}

StackList* init( void )
{
	StackList *stack = (StackList *)malloc(sizeof(*stack));
	stack->nElem = 0;
	stack->head = stack->tail = NULL;
	return stack;
}

void push( StackList *lstack, const schar data )
{
	Node *newNode = (Node *)malloc(sizeof(*newNode));
	newNode->data = data;
	newNode->next = NULL;
	newNode->before = NULL;

	if(lstack->head == NULL)
	{
		lstack->head = newNode;
		lstack->tail = newNode;
		lstack->head->next = lstack->tail;
		lstack->tail->next = NULL;
		lstack->tail->before = lstack->head->next;
	}
	else
	{
		Node *oldTail = lstack->tail;
		lstack->tail->next = newNode;
		lstack->tail = newNode;
		lstack->tail->before = oldTail;
	}
	++lstack->nElem;
}

schar pop( StackList *lstack )
{
	schar data;

	if(lstack->nElem == 0)
		return -1;

	data = lstack->tail->data;
	--lstack->nElem;

	if(lstack->head == lstack->tail)
	{
		free(lstack->tail);
		lstack->tail = lstack->head = NULL;
	}
	else
	{
		Node *T = lstack->tail->before;
		free(lstack->tail);
		lstack->tail = T;
	}

	return data;
}

schar lstack_front( StackList *lstack )
{
	if(lstack->head == NULL)
		return -1;

	schar data = lstack->head->data;

	if(lstack->head == lstack->tail)
	{
		lstack->tail = NULL;
		free(lstack->head);
		lstack->head = NULL;	
	}
	else if(lstack->head != lstack->tail)
	{
		Node *T = lstack->head->next;
		free(lstack->head);
		lstack->head = T;
	}
	--lstack->nElem;

	return data;
}
```

## Time Complexity
- 스택의 각 기능들의 수행시간은 전부 O(1)이지만 주어진 문자열의 수 만큼 돌아가기 때문에  시간 복잡도는 <b>O(n)</b>인 것 같다.

## Space Complexity
- 공간 복잡도: <b>O(max(L, T))</b>.

## Tags
- [스택](https://github.com/myoi-oj/baekjoon-oj#stack), [연결 리스트](https://github.com/myoi-oj/baekjoon-oj#linkedlist) 
