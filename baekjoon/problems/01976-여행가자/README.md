## 문제
- [1976번 여행 가자](https://www.acmicpc.net/problem/1976)

## C++ - 인접 행렬
```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

static int x = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

int a[201][201] = {0};

int main()
{
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			scanf("%d", &a[i][j]);
		}
		a[i][i] = 1;
	}

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
		{
			for(int k=0; k<n; ++k)
			{
				if(a[j][i] && a[i][k]) a[j][k] = 1;
			}
		}
	}

	int src, dest;
	scanf("%d", &src);
	for(int i=1; i<m; ++i)
	{
		scanf("%d", &dest);
		if(!a[src-1][dest-1])
		{
			printf("NO\n");
			return 0;
		}
		src = dest;
	}

	printf("YES\n");

	return 0;
}
```

## C++ - 집합
```cpp
#include <cstdio>
#include <iostream>
using namespace std;

static int x = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

int city[201] = {0};

int fi(int x)
{
	if(city[x]==x) return x;

	return city[x] = fi(city[x]);

}

void uni(int s, int d)
{
	int x = fi(s);
	int y = fi(d);

	if(x==y) return;

	if(x<y)
		city[x] = y;
	else
		city[y] = x;
}

int main()
{

	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
		
	for(int i=1; i<=n; ++i)
		city[i] = i;

	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=n; ++j)
		{
			int a;
			scanf("%d", &a);
			if(a==1)
			{
				uni(i, j);
			}
		}
	}

	int s, d;
	scanf("%d", &s);
	for(int i=1; i<m; ++i)
	{
		scanf("%d", &d);
		if(fi(s)!=fi(d))
		{
			s = 0;
			break;
		}
		s = d;
	}

	if(!s) printf("NO\n");
	else printf("YES\n");

	return 0;
}
```

## Complexity
- 인접 행렬을 사용 할 경우 시간 복잡도는 <b>O(n<sup>3</sup>)</b> , 공간 복잡도는 <b>O(n<sup>2</sup>)</b>가 된다.

- 집합을 사용할 경우 `find()`에 O(log<sub>e</sub>n)의 시간이 걸리고 이를 `n`번 반복하니 최총
 시간 복잡도는 <b>O(nlog<sub>e</sub>n)</b>가 될것같다. 공간 복잡도는 `n`개의 `city`를 배열에
 저장하니 <b>O(n)</b>이 된다.

## Tags
- [집합](https://github.com/myoi-oj/baekjoon-oj#set)
