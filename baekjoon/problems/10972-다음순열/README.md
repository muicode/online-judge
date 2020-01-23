## 문제
- [10972번 다음 순열](https://www.acmicpc.net/problem/10972)

## C
```cpp
#include <stdio.h>
#include <stdbool.h>

#define swap(x, y) {int temp = (x); (x) = (y); (y) = temp;}

void sortedpermutations(int v[], int n)
{
	int index;
	for (index = n - 2; index >= 0; --index)
	{
		if (v[index] < v[index + 1])
			break;
	}

	if (index == -1)
	{
		printf("-1\n");
		return;
	}
	else
	{
		int low = index + 1;
		int high = n - 1;
		for (int i = low; i <= high; ++i)
		{
			if (v[i] > v[index] && v[i] < v[low])
			{
				low = i;
			}
		}

		swap(v[index], v[low]);

		low = index + 1;
		high = n - 1;
		while (low < high)
		{
			swap(v[low], v[high]);
			++low;
			--high;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main(void)
{
	int n;
	int v[10000];
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
		scanf("%d", &v[i]);

	sortedpermutations(v, n);
	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O()</b>.

## Space Complexity
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [순열](https://github.com/myoi-oj/baekjoon-oj#permutation)
