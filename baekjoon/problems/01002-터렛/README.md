## 문제
- [1002번 터렛](https://www.acmicpc.net/problem/1002)

## C
```cpp
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int x1,y1,r1;
		int x2,y2,r2;
		int low, high;
		float dist;

		scanf("%d %d %d %d %d %d", &x1,&y1,&r1,&x2,&y2,&r2);
	
		x1 = x2-x1;
		y1 = y2-y1;
		int val = (x1*x1) + (y1*y1);
		dist = sqrt(val);

		low = abs(r1-r2);
		high = abs(r1+r2);

		if(dist == 0)
		{
			printf("%d\n", (r1==r2) ? -1 : 0);
		}
		else if(low < dist && dist < high)
		{
			printf("2\n");
		}
		else if(low==dist || dist == high)
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(sqrt())</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
