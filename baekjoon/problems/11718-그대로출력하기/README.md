## 문제
- [11718번 그대로 출력하기](https://www.acmicpc.net/problem/11718)

## C
```c
#include <stdio.h>

#define LENGTH 100

int main(void)
{
	char str[LENGTH + 1];
	while(fgets(str, LENGTH, stdin))
	{
		printf("%s", str);
	}

	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(t)</b>, t = # of test cases.
- 공간 복잡도: <b>O(max(str))</b>.

## Tags
- [출력](https://github.com/myoi-oj/baekjoon-oj#print)
