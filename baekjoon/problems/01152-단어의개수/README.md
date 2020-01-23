  ## 문제
- [1152번 단어의 개수](https://www.acmicpc.net/problem/1152)

## C
```cpp
#include <stdio.h>
int main(int argc, char **argv)
{
	_Bool isSpace = 0;
	_Bool onWord = 0;
	int nWord = 0;
	char ch;

	while((ch=getchar())!='\n')
	{
		if(ch==' ' && !onWord)
		{
			isSpace = 1;
			continue; // begin with space
		}
		else if(ch==' ' && isSpace) continue; // dup spaces
		else if(ch==' ' && onWord) ++nWord, onWord=0, isSpace=1;
		else onWord=1, isSpace=0;
	}

	printf("%d\n", onWord ? nWord+1 : nWord);

	return 0;
}
```

## Time Complexity
- 입력으로 들어오는 문자열 만큼 반복을 하므로 시간 복잡도는 <b>O(n), n = len(string)</b>가 된다.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
