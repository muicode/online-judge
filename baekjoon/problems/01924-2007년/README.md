  ## 문제
- [1924번 2007년](https://www.acmicpc.net/problem/1924)

## C
```cpp
#include <stdio.h>

int main(void)
{
	
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int m, d;
	char *str;

	scanf("%d%d", &m, &d);

	for(int i=1; i<m; ++i)
	{
		d += month[i-1];
	}

	switch(d%7)
	{
		case 0: str="SUN"; break;
		case 1: str="MON"; break;
		case 2: str="TUE"; break;
		case 3: str="WED"; break;
		case 4: str="THU"; break;
		case 5: str="FRI"; break;
		case 6: str="SAT";
	}

	printf("%s\n", str);
	return 0;
}
```

## Time Complexity
- 입력된 month(`m`)의 수 만큼 반복하는 과정이 O(m) 이고 나머지는 O(1)이므로 이 문제의 시간 복잡도는 **O(m)** 이다.

## Space Complexity
- 입력에 따라 추가되는 공간 복잡도는 없으므로 **O(1)**

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation)
