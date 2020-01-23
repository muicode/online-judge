## 문제
- [2439번 별찍기 2](https://www.acmicpc.net/problem/2439)

## C
```c
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n-(i+1); ++j)
		{
			printf(" ");
		}
		for(int j=0; j<i+1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

```

## Complexity
- 시간 복잡도: <b>O(n<sup>2</sup>)</b>.
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [출력](https://github.com/myoi-oj/baekjoon-oj#print)
