## 문제
- [1110번 더하기 사이클](https://www.acmicpc.net/problem/1110)

## C
```cpp
#include <stdio.h>

int main(void)
{
	unsigned original, newVal=0;
	int cycle=0;
	scanf("%u", &original);

	newVal = original;
	do
	{
		newVal = (newVal%10)*10+((newVal/10 + newVal%10)%10);
		++cycle;
	}while(original != newVal);

	printf("%u\n", cycle);
	return 0;
}
```

## Time Complexity
- 입력의 크기는 `0 <= n <= 99` 이 값들을 전부 돌려보면 최대  `60`번 반복한다는 걸 알수있다.
그러므로 이 문제의 최종 시간 복잡도는 <b>O(60)</b>이 된다.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
