  ## 문제
- [10871번 X보다 작은 수](https://www.acmicpc.net/problem/1924)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int cnt, x;
	scanf("%d%d", &cnt, &x);

	for(int i=0; i<cnt; ++i)
	{
		int n;
		scanf("%d", &n);
		if(n<x)
		{
			printf("%d ", n);
		}
	}
	return 0;
}
```

## Time Complexity
- `cnt`개의 숫자를 입력받고 비교하므로 시간 복잡도는 **O(n), n=cnt** 가 된다.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation)
