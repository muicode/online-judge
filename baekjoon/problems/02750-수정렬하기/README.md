## 문제
- [2750번 수 정렬하기](https://www.acmicpc.net/problem/2750)

## C
```c
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int n, int *arr)
{
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n-(i+1); ++j)
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}	
		}
	}
}

void print(int n, int *arr)
{
	for(int i=0; i<n; ++i)
	{
		printf("%d\n", arr[i]);
	}
}

int main(int argc, char **argv)
{
	int n;
	int *arr;
	scanf("%d", &n);

	arr = malloc(n * sizeof(*arr));

	for(int i=0; i<n; ++i)
	{
		scanf("%d", &arr[i]);
	}

	bubble_sort(n, arr);
	print(n, arr);

	free(arr);
	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(n<sup>2</sup>)</b>.
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [정렬](https://github.com/myoi-oj/baekjoon-oj#sort)
