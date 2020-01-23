## 문제
- [15552번 빠른 A+B](https://www.acmicpc.net/problem/15552)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int t;
	int a, b;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d%d", &a, &b);
		printf("%d\n", a+b);
	}
	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
