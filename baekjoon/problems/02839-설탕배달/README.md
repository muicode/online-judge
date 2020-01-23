  ## 문제
- [2839번 설탕 배달](https://www.acmicpc.net/problem/2839)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int san=0, go=0;
	int sugar;
	scanf("%d", &sugar);

	while(sugar>0)
	{
		if(sugar%5==0)
		{
			sugar-=5;
			++go;
		}
		else
		{
			sugar-=3;
			++san;
		}
	}

	printf("%d\n", (sugar==0) ? san+go : -1);

	return 0;
}
```

## Time Complexity
- `n = sugar` 이라고 할 경우 최대 `n`만큼 while문을 반복한다. 하지만 최소한의 봉지를 가져가기 위해 
지속적으로 `5` 또는 `3`을 `n`에서 빼고 있기 때문에 최종 시간 복잡도는 <b>O(max(n/5, n/3))</b>가 된다.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation), [수학](https://github.com/myoi-oj/baekjoon-oj#math)
