## 문제
- [10828번 스택](https://www.acmicpc.net/problem/10828)

## C-1
```cpp
#include <stdio.h>
#include <stdlib.h>

typedef _Bool bool;

typedef struct Node
{
	int data;
	struct Node *next;
} Node;

typedef struct StackList
{
	int nElem;
	Node *head;
	Node *tail;
} StackList;

StackList* lstack_init( void )
{
	StackList *stack = malloc(sizeof(*stack));
	stack->nElem = 0;
	stack->head = stack->tail = NULL;
	return stack;
}

void lstack_push( StackList *lstack, const int data )
{
	Node *newNode = malloc(sizeof(*newNode));
	newNode->data = data;
	newNode->next = NULL;

	if(lstack->head == NULL)
	{
		lstack->head = newNode;
		lstack->tail = newNode;
		lstack->head->next = lstack->tail;
		lstack->tail->next = NULL;
	}
	else
	{
		lstack->tail->next = newNode;
		lstack->tail = newNode;
	}
	++lstack->nElem;
}

int lstack_pop( StackList *lstack )
{
	int data;

	if(lstack->head == NULL)
	{
		return -1;
	}
	
	data = lstack->tail->data;
	--lstack->nElem;
	if(lstack->head == lstack->tail)
	{
		free(lstack->tail);
		lstack->tail = lstack->head = NULL;
		return data;
	}

	Node *temp = lstack->head;
	while(temp->next != lstack->tail)
	{
		temp = temp->next;
	}

	free(lstack->tail);
	lstack->tail = temp;

	return data;
}

bool lstack_isEmpty( StackList *lstack )
{
	return !(lstack->nElem);
}

void lstack_destroy(StackList *lstack )
{
	if(lstack)
	{
		if(lstack->head == lstack->tail)
		{
			lstack->tail = NULL;
			free(lstack->head);
			lstack->head = NULL;
		}
		else
		{
			while(lstack->head != lstack->tail)
			{
				Node *temp = lstack->head->next;
				free(lstack->head);
				lstack->head = temp;
			}	
			lstack->head = NULL;
			free(lstack->tail);
			lstack->tail = NULL;
		}

		free(lstack);
		lstack = NULL;
	}
	return;
}

int main(int argc, char **argv)
{
	StackList *lstack = lstack_init();
	int n;
	scanf("%d", &n);

	while(n--)
	{
		char command[8];
		scanf("%s", command);

		if(command[1]=='u')
		{
			int data;
			scanf("%d", &data);
			lstack_push(lstack, data);
		}
		else if(command[1]=='i')
		{
			printf("%d\n", lstack->nElem);
		}
		else if(command[1]=='m')
		{
			printf("%d\n", lstack_isEmpty(lstack));
		}
		else
		{
			if(command[0]=='t')
			{
				printf("%d\n", lstack_top(lstack));
			}
			else
			{
				printf("%d\n", lstack_pop(lstack));
			}
		}
	}

	lstack_destroy(lstack);

	return 0;
}
```

## C-2
```cpp
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STACK_INIT_SIZE 10001

typedef _Bool bool;
typedef int elem_type;

typedef struct Stack_t
{
	int capacity;
	int nElem;
	elem_type *data;
} Stack;


Stack* stack_init( void )
{
	Stack *stack = malloc(sizeof(*stack));
	stack->data = malloc(STACK_INIT_SIZE * sizeof(elem_type));
	stack->capacity = STACK_INIT_SIZE;
	stack->nElem = 0;
	return stack;
}

int stack_size( const Stack *stack )
{
	return stack->nElem;
}

bool stack_isFull( const Stack *stack )
{
	return (stack->nElem == stack->capacity);
}

bool stack_isEmpty( const Stack *stack )
{
	return !(stack->nElem);
}

void stack_push( Stack *stack, const elem_type elem )
{
	(stack->data)[stack->nElem] = elem;
	(stack->nElem)++;
}

elem_type stack_pop( Stack *stack )
{
	if(stack_isEmpty(stack))
	{
		return -1;
	}
	else
	{
		--(stack->nElem);
		return (stack->data)[stack->nElem];
	}
}

elem_type stack_top( const Stack *stack )
{
	if(stack_isEmpty(stack))
	{
		return -1;
	}
	else
	{
		int length = stack->nElem;
		return (stack->data)[length-1];
	}
}

void free_stack( Stack *stack )
{
	free(stack->data);
	free(stack);
}

int main( int argc, char **argv )
{
	Stack *stack = stack_init();

	int n;
	scanf("%d", &n);

	while(n--)
	{
		char command[8];
		int num;
		scanf("%s", command);
		char symbol = command[1];

		if(symbol=='u')
		{
			scanf("%d", &num);
			stack_push(stack, num);
		}
		else if(symbol=='i')
		{
			printf("%d\n", stack_size(stack));
		}
		else if(symbol=='m')
		{
			printf("%d\n", stack_isEmpty(stack));
		}
		else
		{
			if(command[0]=='p')
			{
				printf("%d\n", stack_pop(stack));
			}
			else
			{
				printf("%d\n", stack_top(stack));
			}
		}
	}

	free_stack(stack);
	return 0;
}
```

## Time Complexity
- `C-1` 코드는 링크드리스트로 구현한 스택으로 삽입은 O(n), 그 외 기능은 O(1)이므로 최종적인
시간 복잡도는 <b>O(n)</b>이 된다.
- `C-2` 코드는 배열로 구현한 스택으로 모든 기능들의 시간 복잡도는 <b>O(1)</b>이다.

## Space Complexity
- `C-1` 코드는 링크드 리스트로 구현한 스택으로, 공간 복잡도는 삽입에 의해 결정되므로  <b>O(number of push)</b>가 된다.
- `C-2` 코드는 배열로 구현한 스택으로, 배열의 크기는 정해져있으므로 최종 공간 복잡도는 
<b>O(1)</b>이 된다.

## Tags
- [스택](https://github.com/myoi-oj/baekjoon-oj#stack)
