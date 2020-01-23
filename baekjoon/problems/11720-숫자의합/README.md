## 문제
- [11720번 숫자의 합](https://www.acmicpc.net/problem/11720)

## C
```c
#include <stdio.h>

int main(void)
{
	char str[101];
	int sum = 0;
	scanf("%d", &sum);
	scanf("%s", str);

	sum = 0;
	for(int i=0; str[i]; ++i)
	{
		sum += str[i]-'0';
	}

	printf("%d\n", sum);

	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(len(str))</b>.
- 공간 복잡도: <b>O(max(str))</b>.

## Tags
- [출력](https://github.com/myoi-oj/baekjoon-oj#print)
