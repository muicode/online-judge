  ## 문제
- [1003번 피보나치 함수](https://www.acmicpc.net/problem/1003)

## C
```cpp
#include <stdio.h>

int main(int argc, char **argv)
{
	int fibo[41] = {0,1,1};
	int t;
	scanf("%d", &t);

	for(int i=3; i<42; ++i)
	{
		fibo[i] = fibo[i-2] + fibo[i-1];
	}

	while(t--)
	{
		int ban;
		scanf("%d", &ban);	

		if(ban==0)
		{
			printf("1 0\n");
		}
		else
		{
			printf("%d %d\n", fibo[ban-1], fibo[ban]);
		}
	}

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- dp풀이로 문제의 최대 입력인 `N+1(41)`으로 배열을 선언. 
최종 복잡도는 O(41) = <b>O(1)</b>이 된다.

## Tags
- [다이나믹 프로그래밍](https://github.com/myoi-oj/baekjoon-oj#dp)
