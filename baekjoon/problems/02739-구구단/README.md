## 문제
- [2739번 구구단](https://www.acmicpc.net/problem/2739)

## C++
```cpp
#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for(int i=1; i<10; ++i)
	{
		printf("%d * %d = %d\n",n, i, n*i);
	}

	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(n)</b>.
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [출력](https://github.com/myoi-oj/baekjoon-oj#print)
