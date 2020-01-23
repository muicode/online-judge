## 문제
- [10430번 나머지](https://www.acmicpc.net/problem/10430)

## C
```cpp
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	printf("%d\n", (a+b)%c);
	printf("%d\n", (a%c+b%c)%c);
	printf("%d\n", (a*b)%c);
	printf("%d\n", (a%c * b%c)%c);

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
