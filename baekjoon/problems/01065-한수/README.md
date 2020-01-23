## 문제
- [1065번 한수](https://www.acmicpc.net/problem/1065)

## C
```cpp
#include <stdio.h>
#include <stdlib.h>

int hansoo(int n)
{
	int cnt = 99;
	if(n<100) return n;
	else if(n<=110) return cnt;
	else
	{
		for(int i=111; i<=n; ++i)
		{
			int a,b,c=i;
			a=c/100;
			c%=100;
			b=c/10;
			c%=10;
			
			if(a-b == b-c)
			{
				++cnt;
			}
		}
	}
	
	return cnt;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d\n", hansoo(n));
	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [브루트 포스](https://github.com/myoi-oj/baekjoon-oj#bruteforce)
