## 문제
- [10869번 사칙연산](https://www.acmicpc.net/problem/10869)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d\n%d\n%d\n%d\n%d\n", a+b, a-b, a*b, a/b, a%b);

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
