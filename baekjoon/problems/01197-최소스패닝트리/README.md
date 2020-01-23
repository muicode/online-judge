## 문제
- [1197번 최소 스패닝 트리](https://www.acmicpc.net/problem/1197)

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
