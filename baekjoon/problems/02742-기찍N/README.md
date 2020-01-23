## 문제
- [2742번 기찍 N](https://www.acmicpc.net/problem/2742)

## C++
```cpp
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for(int i=n; i>=1; --i)
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

