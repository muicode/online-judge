## 문제
- [1010번 다리 놓기](https://www.acmicpc.net/problem/1010)

## C-1
```cpp
#include <stdio.h>
int buf[30][30];
int bincoeff(int n, int m)
{
	if (n == m) return 1;
	if (m == 0) return 1;
	if (buf[n][m] != 0) return buf[n][m];
	return buf[n][m] = bincoeff(n - 1, m) + bincoeff(n - 1, m - 1);
}

int main(void)
{
	int t, m, n;
	scanf("%d", &t);

	while (t--)
	{
		scanf("%d %d", &m, &n);
		printf("%d\n", bincoeff(n, m));
	}
	return 0;
}
```

## C-2
```cpp
#include <stdio.h>

int min(int a, int b)
{
	return (a < b) ? a : b;
}

int bincoeff(int n, int m)
{
	int C[31] = {1,0};
	for(int i=1; i<m+1; ++i)
	{
		C[i] = 0;
	}

	for(int i=1; i<=n; ++i)
	{
		for(int j=min(i,m); j>0; --j)
		{
			C[j] = C[j] + C[j-1];
		}
	}

	return C[m];
}
```

## C-3
```cpp
int bincoeff(int n, int m) 
{ 
	int rv = 1; 

	if ( m > n - m ) 
	{
		m = n - m;
	}

	for (int i = 0; i < m; ++i) 
	{ 
		rv *= (n - i); 
		rv /= (i + 1); 
	} 

	return rv; 
} 
```

## Time Complexity
- `C-1`코드의 시간 복잡도: <b>O(n\*m)</b>.
- `C-2`코드의 시간 복잡도: <b>O(n\*m)</b>.
- `C-3`코드의 시간 복잡도: <b>O(m)</b>.

## Space Complexity
- `C-1`코드의 공간 복잡도: <b>O(n\*m)</b>.
- `C-2`코드의 공간 복잡도: <b>O(m)</b>.
- `C-3`코드의 공간 복잡도: <b>O(1)</b>.

## Tags
- [다이나믹 프로그래밍](https://github.com/myoi-oj/baekjoon-oj#dp)

## Reference
- [Binomial Coefficient | DP-9](https://www.geeksforgeeks.org/binomial-coefficient-dp-9/)
- [Space and time efficient Binomial Coefficient](https://www.geeksforgeeks.org/space-and-time-efficient-binomial-coefficient/)
