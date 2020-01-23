## 문제
- [2231번 분해합](https://www.acmicpc.net/problem/2231)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int n, x;
	scanf("%d", &n);
	
	for(int i=n/2,j=0; i<n; ++i)
	{
		int temp = i;
		j = i;
		while(j>0)
		{
			temp += j%10;
			j/=10;
		}

		if(temp==n)
		{
			x = i;
			break;
		}
	}
	
	printf("%d\n", x>=n ? 0 : x);

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [브루트포스](https://github.com/myoi-oj/baekjoon-oj#bruteforce)
