## 문제
- [9372번 상근이의 여행](https://www.acmicpc.net/problem/9372)

## C
```c
#include <stdio.h>
int main(void)
{
	int t,n,m,a,b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &m);
		while(m--)
			scanf("%d %d", &a, &b);
		printf("%d\n", n-1);
	}
	return 0;
}
```

모든 정점들이 이어져있는 상태에서 가장 적은 종류의 비행기라 하면, 모든 정점들을 
잇는 간선의 수,	즉 `V-1`개가 가장 적은 비행기의 종류가 된다.

## Complexity

- 시간 복잡도: <b>O(1)</b>
- 공간 복잡도: <b>O(1)</b>

## Tags
- [최소 신장 트리](https://github.com/myoi-oj/baekjoon-oj#mst)

