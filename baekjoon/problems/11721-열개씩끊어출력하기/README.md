## 문제
- [11721번 열 개씩 끊어 출력하기](https://www.acmicpc.net/problem/11721)

## C++
```cpp
#include <stdio.h>

int main(void)
{
	char str[101];
	scanf("%s", str);
	int cnt = 0;

	while(str[cnt])
	{
		printf("%c", str[cnt]);
		++cnt;
		if(cnt%10==0)
		{
			printf("\n");
		}
	}

	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(n)</b>.
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [출력](https://github.com/myoi-oj/baekjoon-oj#print)
