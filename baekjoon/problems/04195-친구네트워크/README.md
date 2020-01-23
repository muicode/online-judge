## 문제
- [4195번 친구 네트워크](https://www.acmicpc.net/problem/4195)

## C
```cpp
#include <iostream>
#include <cstdio> 
#include <map>
using namespace std;

static int x = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
} ();

// pair<root, network>
map<string, pair<string, int>> mymap;

pair<string, int> fi(string a)
{
	auto it = mymap[a];

	// if a == root
	if(it.first == a) return it;
	else return mymap[a] = fi(mymap[a].first);
}

int uni(string a, string b)
{
	auto it = mymap.find(a);
	auto it2 = mymap.find(b);
	if(it == mymap.end())
	{
		mymap[a] = make_pair(a, 1);
	}
	if(it2 == mymap.end())
	{
		mymap[b] = make_pair(b, 1);
	}

	auto x = fi(a);
	auto y = fi(b);
	
	if(x.first == y.first) return x.second;
	// y's root becomes x
	mymap[y.first].first = x.first;
	// update x's network
	mymap[x.first].second += y.second;

	return mymap[x.first].second;
}

int main()
{
	int t, n;
	scanf("%d", &t);

	while(t--)
	{
		scanf("%d", &n);
		char a[21], b[21];
		for(int i=0; i<n; ++i)
		{
			scanf("%s %s", a, b);
			printf("%d\n", uni(a, b));
		}
		mymap.clear();
	}
	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(max(nlog<sub>2</sub>n, nlog<sub>e</sub>n))</b>.

## Space Complexity
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [집합](https://github.com/myoi-oj/baekjoon-oj#set), [최소 신장 트리](https://github.com/myoi-oj/baekjoon-oj#mst) 
