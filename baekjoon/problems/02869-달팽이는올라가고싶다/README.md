## 문제
- [2869번 달팽이는 올라가고 싶다](https://www.acmicpc.net/problem/2869)

## C-1
```cpp
#include <stdio.h>
#include <math.h>
#include <limits.h>

int a, b, v;

int binarySearch()
{
	int low = 0, high = v/(a-b)+1;
	int ndays;
	int result = INT_MAX;

	while(low<=high)
	{
		ndays = low+(high-low)/2;

		if(v <= ndays*(a-b)+a) 
		{
			result = (ndays+1 < result) ? ndays+1 : result;
			high = ndays - 1;
		}
		else 
		{
			low = ndays + 1;
		}
	}

	return result;
}

int main(void)
{
	scanf("%d %d %d", &a,&b,&v);
	printf("%d\n", binarySearch());

	return 0;
}
```

## C-2
```cpp
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a,b,v;
	scanf("%d %d %d", &a,&b,&v);
	printf("%d\n", (v-a-1)/(a-b)+2);

	return 0;
}
```

## Time Complexity
- `C-1` 코드의 시간 복잡도: <b>O(log n)</b>.
- `C-2` 코드의 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- `C-1` 코드의 공간 복잡도: <b>O(1)</b>.
- `C-2` 코드의 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math), [이분 탐색](https://github.com/myoi-oj/baekjoon-oj#binarysearch)
