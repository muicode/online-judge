## 문제
- [4344번 평균은 넘겠지](https://www.acmicpc.net/problem/4344)

## C
```cpp
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000
int gakusei[SIZE];

int main(void)
{
	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, cnt=0;
		float avg = 0.0f;
		
		scanf("%d", &n);
		
		for(int i=0; i<n; ++i)
		{
			scanf("%d", &gakusei[i]);
			avg += gakusei[i];
		}

		avg /= n;

		for(int i=0; i<n; ++i)
		{
			if(gakusei[i] > avg)
			{
				++cnt;
			}
		}

		printf("%.3f%%\n", cnt*100.0/n);
	}
	return 0;
}

```

## Time Complexity
- 평균값을 구한 후 배열의 모든 값과 비교하므로 시간 복잡도는 <b>O(n)</b>이 된다.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
