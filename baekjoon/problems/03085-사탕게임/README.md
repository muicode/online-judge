## 문제
- [3085번 사탕 게임](https://www.acmicpc.net/problem/3085)

## C
```cpp
#include <stdio.h>

char bomboni[51][51] = {0};
int max = 1;
int n;

void swap(char *a, char *b)
{
	if(*a == *b) return;
	char temp = *a;
	*a = *b;
	*b = temp;
}

void print(void)
{
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			printf("%c", bomboni[i][j]);
		}
		printf("\n");
	}
	printf("\n");

}

void search(void)
{
	for(int i=0; i<n; ++i)
	{
		int h = 1;
		int v = 1;
		for(int j=0; j<n; ++j)
		{
			if(bomboni[i][j] == bomboni[i][j+1]) ++h;
			else h = 1;

			if(bomboni[j][i] == bomboni[j+1][i]) ++v;
			else v = 1;

			if(h>max && h>v) max = h;
			else if(v>max && v>h) max = v;
		}
	}
}

int main(void)
{
	scanf("%d", &n);

	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			scanf(" %c", &bomboni[i][j]);

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			// swap horizontal
			swap(&bomboni[i][j], &bomboni[i][j+1]);		
			search();
			// swap back to normal
			swap(&bomboni[i][j], &bomboni[i][j+1]);		

			// swap vertical
			swap(&bomboni[i][j], &bomboni[i+1][j]);		
			search();
			// swap back to normal
			swap(&bomboni[i][j], &bomboni[i+1][j]);		
		}
	}

	printf("%d\n", max);

	return 0;
}
```

## Time Complexity
- `n*n`개의 데이터의 연속된 두 개의 가로값과 세로값을 전부 변경해가며 반복적으로 순회한다.
순회의 경우 O(n<sup>2</sup>)의 시간이 걸리므로 최종 시간 복잡도는 
O(n<sup>2</sup> * n<sup>2</sup>) = <b>O(n<sup>4</sup>)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [브루트 포스](https://github.com/myoi-oj/baekjoon-oj#bruteforce)
