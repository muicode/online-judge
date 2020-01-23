  ## 문제
- [10817번 세 수](https://www.acmicpc.net/problem/10817)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int a,b,c;
	scanf("%d%d%d", &a, &b, &c);

	if(a>=b && a>=c)
	{
		printf("%d\n", (b>c) ? b : c);
	}
	else if(b>=a && b>=c)
	{
		printf("%d\n", (a>c) ? a : c);
	}
	else if(c>=a && c>=b)
	{
		printf("%d\n", (a>b) ? a : b);
	}
	return 0;
}
```

## Time Complexity
- 시간 복잡도는 <b>O(1)</b>.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation)
