## 문제
- [1647번 도시 분할 계획](https://www.acmicpc.net/problem/1647)

## C++ - Kruskal's Algorithm
```cpp
#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

static int x = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

int *path;

int fi(int a)
{
	if(path[a] == a) return a;
	return path[a] = fi(path[a]);
}

int main()
{
	int n, m;
	int mincost = 0;

	vector<pair<int, pair<int,int>>> v;
	scanf("%d", &n);

	path = new int[n+1];
	for(int i=1; i<=n; ++i) path[i] = i;

	scanf("%d", &m);
	for(int i=0; i<m; ++i)
	{
		int src, dest, weight;
		scanf("%d %d %d", &src, &dest, &weight);
		v.push_back(make_pair(weight, make_pair(src,dest)));
	}

	int mst=0;
	sort(v.begin(), v.end());
	for(auto val : v)
	{
		int a = fi((val.second).first);
		int b = fi((val.second).second);
		if(a != b)
		{
			mincost += val.first;
			path[b] = a;
			++mst;
		}

		if(mst == n-2) break;
	}

	printf("%d\n", mincost);

	delete [] path;

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(eloge)</b>.
- 공간 복잡도: <b>O(e + v)</b>.

## C++ - Prim's Algorithm
```cpp
#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

static int x = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

typedef pair<int, int> Pair;

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	priority_queue<Pair, vector<Pair>, greater<Pair>> pq;
	vector<vector<Pair>> v(n + 1);
	vector<bool> mi(n + 1, false);

	while(m--)
	{
		int s, d, w;
		scanf("%d %d %d", &s, &d, &w);
		v[s].push_back(make_pair(d, w));
		v[d].push_back(make_pair(s, w));
	}

	int cost = 0;
	int mst = -1;
	int max = -1;
	pq.push(make_pair(cost, 1));

	while (!pq.empty() && mst != n - 1)
	{
		int u = pq.top().second;
		int c = pq.top().first;
		if (max < c) max = c;
		pq.pop();

		if (mi[u] == false)
		{
			cost += c;
			++mst;

			for (auto val : v[u])
				if (mi[val.first] == false)
					pq.push(make_pair(val.second, val.first));
		}
		mi[u] = true;
	}

	printf("%d\n", cost-max);

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(elogv)</b>.
- 공간 복잡도: <b>O(e + v)</b>.

## Tags
- [최소 신장 트리](https://github.com/myoi-oj/baekjoon-oj#mst)
