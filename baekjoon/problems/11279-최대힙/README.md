## 문제
- [11279번 최대 힙](https://www.acmicpc.net/problem/11279)

## C++
```c++
#include <stdio.h>

typedef struct 
{
	int key;
} element;

class Maxheap
{
	private:
		element heap[100001];
		int size;

	public:
		Maxheap():size(0) {}
		void insertMax(int data);
		int deleteMax();
};

void Maxheap::insertMax(int data)
{
	int i = ++size;
	while((i != 1) && (data > heap[i>>1].key))
	{
		heap[i] = heap[i>>1];
		i >>= 1;
	}
	heap[i].key = data;
}

int Maxheap::deleteMax()
{
	int parent, child;
	int item, temp;

	if(size == 0)
	{
		return 0;
	}

	item = heap[1].key;
	temp = heap[size--].key;
	parent = 1;
	child = 2;
	while(child <= size)
	{
		if((child < size) && (heap[child].key) < heap[child+1].key)
		{
			++child;
		}
		if(temp >= heap[child].key)
		{
			break;
		}

		heap[parent] = heap[child];
		parent = child;
		child <<= 1;
	}

	heap[parent].key = temp;
	return item;
}

int main()
{
	Maxheap h;
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; ++i)
	{
		int data;
		scanf("%d", &data);

		if(data != 0)
		{
			h.insertMax(data);
		}
		else
		{
			printf("%d\n", h.deleteMax());
		}
	}

	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(nlogn)</b>.
- 공간 복잡도: <b>O(v)</b>.

## Tags
- [힙](https://github.com/myoi-oj/baekjoon-oj#heap)
