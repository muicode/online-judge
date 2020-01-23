  ## 문제
- [1912번 연속합](https://www.acmicpc.net/problem/1912)

## C
```cpp
#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int *a;
	int *d;
	int n, x;
	scanf("%d", &n);
	
	a = malloc(n * sizeof(*a));
	d = malloc(n * sizeof(*d));

	for(int i=0; i<n; ++i)
		scanf("%d", a+i);
	
	d[0] = a[0];
	for(int i=1; i<n; ++i)
	{
		d[i] = a[i];
		d[i] = max(d[i-1] + a[i], d[i]);
	}
	
	x = d[0];
	for(int i=1; i<n; ++i)
	{
		if(d[i] > x) x = d[i];
	}
	
	printf("%d\n", x);
	
	free(a);
	free(d);

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [다이나믹 프로그래밍](https://github.com/myoi-oj/baekjoon-oj#dp), [수학](https://github.com/myoi-oj/baekjoon-oj#math)
