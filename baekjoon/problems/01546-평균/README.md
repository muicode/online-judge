## 문제
- [1546번 평균](https://www.acmicpc.net/problem/1546)

## C
```cpp
#include <stdio.h>

int main(void)
{
	int n, val, max=-1;
	float avg = 0.0f;

	scanf("%d", &n);
	
	for(int i=0; i<n; ++i)
	{
		scanf("%d", &val);
		if(val > max) max = val;
		avg += val*100;
	}

	printf("%.2f\n", (avg/max)/n);
	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
