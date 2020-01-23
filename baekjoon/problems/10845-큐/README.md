## 문제
- [10845번 큐](https://www.acmicpc.net/problem/10845)

## C
```cpp
#include <stdio.h>
#include <stdlib.h>

typedef _Bool bool;

typedef struct Node
{
	int data;
	struct Node *next;
} Node;

typedef struct QueueList
{
	int nElem;
	Node *head;
	Node *tail;
} QueueList;

QueueList* lqueue_init( void );
void lqueue_destroy( QueueList * );
void lqueue_push( QueueList *, const int );
int lqueue_pop( QueueList * );
int lqueue_front( const QueueList * );
int lqueue_back( const QueueList * );
bool lqueue_isEmpty( const QueueList * );
int lqueue_size( const QueueList * );

int main( int argc, char **argv )
{
	int n;
	QueueList *lqueue = lqueue_init();
	scanf("%d", &n);

	while(n--)
	{
		char command[8];
		scanf("%s", command);

		char symbol = command[1];

		if(symbol=='u')
		{
			int data;
			scanf("%d", &data);

			lqueue_push(lqueue, data);
		}
		else if(symbol=='o')
		{
			printf("%d\n", lqueue_pop(lqueue));
		}
		else if(symbol=='i')
		{
			printf("%d\n", lqueue_size(lqueue));
		}
		else if(symbol=='m')
		{
			printf("%d\n", lqueue_isEmpty(lqueue));
		}
		else if(symbol=='r')
		{
			printf("%d\n", lqueue_front(lqueue));
		}
		else if(symbol=='a')
		{
			printf("%d\n", lqueue_back(lqueue));
		}
		else
		{
			;	
		}
	}

	lqueue_destroy(lqueue);

	return 0;
}


QueueList* lqueue_init( void )
{
	QueueList *lqueue = malloc(sizeof(*lqueue));
	lqueue->nElem = 0;
	lqueue->head = lqueue->tail = NULL;
	return lqueue;
}

void lqueue_destroy( QueueList *lqueue )
{
	while(lqueue->head)
	{
		lqueue_pop(lqueue);
	}

	free(lqueue);
}
void lqueue_push( QueueList *lqueue, int data )
{
	Node *newNode = malloc(sizeof(*newNode));
	newNode->data = data;
	newNode->next = NULL;

	if(lqueue->head == NULL)
	{
		lqueue->head = lqueue->tail = newNode;
		lqueue->head->next = lqueue->tail;
		lqueue->tail->next = NULL;
	}
	else
	{
		lqueue->tail->next = newNode;
		lqueue->tail = newNode;
	}

	++lqueue->nElem;
}

int lqueue_pop( QueueList *lqueue )
{
	if(lqueue_isEmpty(lqueue))
	{
		return -1;
	}

	int data = lqueue->head->data;
	--lqueue->nElem;

	if(lqueue->head == lqueue->tail)
	{
		lqueue->tail = NULL;
		free(lqueue->head);
		lqueue->head = NULL;	
	}
	else
	{
		Node *temp = lqueue->head->next;
		free(lqueue->head);
		lqueue->head = temp;
	}

	return data;
}

int lqueue_front( const QueueList *lqueue )
{
	if(lqueue_isEmpty(lqueue))
	{
		return -1;
	}

	return lqueue->head->data;
}

int lqueue_back( const QueueList *lqueue )
{
	if(lqueue_isEmpty(lqueue))
	{
		return -1;
	}

	return lqueue->tail->data;
}

bool lqueue_isEmpty( const QueueList* lqueue )
{
	return !(lqueue->nElem);
}

int lqueue_size( const QueueList *lqueue )
{
	return lqueue->nElem;
}

```

## Tags
- [큐](https://github.com/myoi-oj/baekjoon-oj#queue)
