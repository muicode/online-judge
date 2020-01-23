## 문제
- [2455번 지능형 기차](https://www.acmicpc.net/problem/2455)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int a, m, max;
	scanf("%d %d", &m, &max);

	for(int i=0; i<2; ++i)
	{
		scanf("%d %d", &m, &a);

		if( max < max-m+a)
			max = max-m+a;
	}

	printf("%d\n", max);

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation)
