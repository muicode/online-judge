## 문제
- [10974번 모든 순열](https://www.acmicpc.net/problem/10974)

## C-1
```cpp
#include <stdio.h>
#include <stdbool.h>

bool v[10];
int tmp[10];

void permutation(int num, int d, int n)
{
	tmp[d] = num;

	if (d == n)
	{
		for(int i=1; i<=n; ++i)
			printf("%d ", tmp[i]);
		printf("\n");
	}

	for (int i = 1; i <= n; ++i)
	{
		if (v[i]) continue;
		v[i] = true;
		permutation(i, d + 1, n);
		v[i] = false;
	}
}

int main(void)
{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
	{
		v[i] = true;
		permutation(i, 1, n);
		v[i] = false;
	}
	return 0;
}
```

## C-2
```cpp
#include <stdio.h>
#include <stdbool.h>

#define SWAP(x, y) {int temp = (x); (x) = (y); (y) = temp;}

void sortedPermutations(int v[], int n)
{
	bool isFinished = false;
	while (!isFinished)
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", v[i]);
		}
		printf("\n");

		int index;
		for (index = n - 2; index >= 0; --index)
		{
			if (v[index] < v[index + 1])
				break;
		}

		if (index == -1)
		{
			isFinished = true;
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

			SWAP(v[index], v[low]);

			low = index + 1;
			high = n - 1;
			while (low < high)
			{
				SWAP(v[low], v[high]);
				++low;
				--high;
			}
		}
	}
}

int main(void)
{
	int n;
	int v[10];
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) v[i] = i + 1;
	sortedPermutations(v, n);
	return 0;
}
```

## Time Complexity
- 'C-1' 코드의 시간 복잡도: <b>O()</b>.
- 'C-2' 코드의 시간 복잡도: <b>O()</b>.

## Space Complexity
- `C-1` 코드의 공간 복잡도: <b>O(n)</b>.
- `C-2` 코드의 공간 복잡도: <b>O(n)</b>.

## Tags
- [순열](https://github.com/myoi-oj/baekjoon-oj#permutation)
