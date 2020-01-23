## 문제
- [1922번 네트워크 연결](https://www.acmicpc.net/problem/1922)

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

	// space: O(e)
	vector<pair<int, pair<int,int>>> v;
	scanf("%d", &n);

	// space: O(v)
	path = new int[n+1];
	for(int i=1; i<=n; ++i) path[i] = i;

	scanf("%d", &m);
	for(int i=0; i<m; ++i)
	{
		int src, dest, weight;
		scanf("%d %d %d", &src, &dest, &weight);
		v.push_back(make_pair(weight, make_pair(src,dest)));
	}

	// time: O(eloge)
	sort(v.begin(), v.end());

	// time: O(e)
	for(auto val : v)
	{
		// time: O(loge)
		int a = fi((val.second).first);
		// time: O(loge)
		int b = fi((val.second).second);

		if(a != b)
		{
			mincost += val.first;
			path[b] = a;
		}
	} 

	printf("%d\n", mincost);
	
	delete [] path;

	// total space: O(e + v)
	// total time: O(2(eloge)) = O(eloge)
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
#include <vector>
#include <queue>

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
	int n, m, cost = 0;
	int mst = -1;
	priority_queue<Pair, vector<Pair>, std::greater<Pair> > pq;
	scanf("%d %d", &n, &m);

	vector<vector<Pair>> v(n + 1);
	vector<bool> mi(n + 1, false);

	for (int i = 0; i < m; ++i)
	{
		int s, d, w;
		scanf("%d %d %d", &s, &d, &w);
		v[s].push_back(make_pair(d, w));
		v[d].push_back(make_pair(s, w));
	}

	pq.push(make_pair(0, 1));
	while (!pq.empty() && mst != n - 1)
	{
		int c = pq.top().first;
		int u = pq.top().second;
		pq.pop();

		if (mi[u] == false)
		{
			cost += c;
			++mst;
			for (auto ne : v[u])
				if (mi[ne.first] == false)
					pq.push(make_pair(ne.second, ne.first));
		}
		mi[u] = true;
	}
	printf("%d\n", cost);
	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(elogv)</b>.
- 공간 복잡도: <b>O(e + v)</b>.

## Tags
- [최소 신장 트리](https://github.com/myoi-oj/baekjoon-oj#mst)
