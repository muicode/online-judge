  ## 문제
- [1032번 명령 프롬프트](https://www.acmicpc.net/problem/1032)

## C
```cpp
#include <stdio.h>

#define LENGTH 50

int main(int argc, char **argv)
{
	char str[LENGTH+1];
	char input[LENGTH+1];
	int t;
	scanf("%d", &t);
	scanf("%s", str);

	while(--t)
	{
		scanf("%s", input);
		for(int i=0; input[i]; ++i)
		{
			if(str[i] != input[i])
			{
				str[i] = '?';
			}
		}
	}

	printf("%s\n", str);

	return 0;
}
```

## Time Complexity
- 주어진 모든 단어의 길이를 반복하므로 시간 복잡도는 <b>O(t\*n), n = len(str)</b>가 된다.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
