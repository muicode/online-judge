## 문제
- [2887번 행성 터널](https://www.acmicpc.net/problem/2887)

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
typedef pair<int, pair<int, pair<int, int>>> fiPair;

int n;
priority_queue<fiPair, vector<fiPair>, greater<fiPair>> pq;
priority_queue<Pair, vector<Pair>, greater<Pair>> prim;
vector<vector<Pair>> v;

void createEdges()
{
	auto p = pq.top();
	pq.pop();
	for (int i = 1; i < n; ++i)
	{
		auto q = pq.top();
		pq.pop();

		int x1 = p.first;
		int x2 = q.first;
		int src = p.second.second.second;
		int dest = q.second.second.second;

		x1 = abs(x1 - x2);

		v[src].push_back(make_pair(dest, x1));
		v[dest].push_back(make_pair(src, x1));
		p = q;
	}
}

int main()
{
	scanf("%d", &n);
	v.resize(n);

	vector<int> xs, ys, zs;

	for(int i=0; i<n; ++i)
	{
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		xs.push_back(x);
		ys.push_back(y);
		zs.push_back(z);
		pq.push(make_pair(x, make_pair(y, make_pair(z, i))));
	}
	createEdges();

	for (int i = 0; i < n; ++i)
		pq.push(make_pair(ys[i], make_pair(xs[i], make_pair(zs[i], i))));
	createEdges();

	for (int i = 0; i < n; ++i)
		pq.push(make_pair(zs[i], make_pair(xs[i], make_pair(ys[i], i))));
	createEdges();

	prim.push(make_pair(0, 0));
	vector<bool> visited(n, false);
	int cost = 0;
	int e = -1;

	while (!prim.empty() && e != n-1)
	{
		int c = prim.top().first;
		int u = prim.top().second;
		prim.pop();

		if (visited[u] == false)
		{
			cost += c;
			++e;
			for (auto val : v[u])
				if (visited[val.first] == false)
					prim.push(make_pair(val.second, val.first));
		}
		visited[u] = true;
	}

	printf("%d\n", cost);
	return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(n + elogv)</b>
- 공간 복잡도: <b>O(n + v + e)</b>

## Tags
- [최소 신장 트리](https://github.com/myoi-oj/baekjoon-oj#mst)
