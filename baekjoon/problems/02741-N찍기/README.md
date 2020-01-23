## 문제
- [2741번 N 찍기](https://www.acmicpc.net/problem/2741)

## C++
```cpp
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; ++i)
	{
		printf("%d\n", i);
	}
	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(n)</b>.
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [출력](https://github.com/myoi-oj/baekjoon-oj#print)
