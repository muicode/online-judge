## 문제
- [2309번 일곤 난쟁이](https://www.acmicpc.net/problem/2309)

## C
```cpp
#include <stdio.h>

int main(void)
{
	_Bool h[101] = {0};
	unsigned char x[9];
	unsigned char fake = 0;
	
	for(int i=0; i<9; ++i)
	{
		scanf("%hhu", x+i);
		h[*(x+i)] = 1;
		fake += *(x+i);
	}

	fake -= 100;
	
	for(int i=0; i<8; ++i)
	{
		for(int j=i+1; j<9; ++j)
		{
			if(x[i]+x[j] == fake)
			{
				h[x[i]] = h[x[j]] = 0;
				i = 9;
			}
		}
	}

	for(int i=1; i<=100; ++i)
		if(h[i]==1) printf("%d\n", i);

	return 0;
}

```

## Time Complexity
- 입력에 따라 실행되는 비용이 다르지가 않으므로 시간 복잡도는 <b>O(1)</b>이 된다.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [브루트 포스](https://github.com/myoi-oj/baekjoon-oj#bruteforce)
