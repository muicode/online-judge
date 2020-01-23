## 문제
- [1717번 집합의 표현](https://www.acmicpc.net/problem/1717)

## C++
```cpp
/*
 * No optimization : TLE
 * Either union or find optimized: Accepted
 */

#include <iostream>

using namespace std;

static int x = []()
{
	std::ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	return 0;
}();

int *root;
int *ra;

int fi(int x)
{
	if(root[x] == x)
	{
		return x;
	}
	else
	{
		// path compression
		return root[x] = fi(root[x]);
	}
}

void merge(int x, int y)
{
	x = fi(x);
	y = fi(y);

	if(x==y) return;

	// union by rank (height)
	if(ra[x] < ra[y])
	{
		root[x] = y;
	}
	else
	{
		root[y] = x;

		if(ra[x] == ra[y])
			ra[x]++;
	}
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	++n;
	root = (int *)malloc(n * sizeof(*root));
	ra = (int *)malloc(n * sizeof(*ra));
	
	for(int i=0; i<n; ++i)
	{
		root[i] = i;
		ra[i] = 0;
	}

	for(int i=0; i<m; ++i)
	{
		int o,a,b;
		scanf("%d %d %d", &o, &a, &b);
		if(o)
		{
			if(fi(a) == fi(b)) printf("YES\n");
			else printf("NO\n");
		}
		else
			merge(a,b);
	}

	delete(root);
	delete(ra);

	return 0;
}
```

집합을 사용하여 풀수있는 문제지만 최적화를 하지 않으면 `TLE`로 실패한다.
최적화는 `find()`에서의 `path compression` 또는 `union()`에서 `union by heiht`의 최적화를 하면된다.

## Time Complexity
- 시간 복잡도: <b>O(mlog<sub>e</sub>n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [집합](https://github.com/myoi-oj/baekjoon-oj#set)
