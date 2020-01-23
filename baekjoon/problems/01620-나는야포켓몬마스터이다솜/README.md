## 문제
- [1620번 나는야 포켓몬 마스터 이다솜](https://www.acmicpc.net/problem/1620)

## C++
```cpp
#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main() {

	int n, m;
	char q[21];
	scanf("%d%d", &n, &m);

	map<string, int> dogam;
	string *ndogam = new string[n];    

	for(int i=0; i<n; ++i)
	{
		scanf("%s", q);
		string str(q);

		dogam[str] = i+1;
		ndogam[i] = str;
	}

	for(int i=0; i<m; ++i)
	{
		scanf("%s", q);
		string str(q);

		if(q[0]<='9')
			printf("%s\n", (ndogam[atoi(q)-1]).c_str() );
		else
			printf("%d\n", dogam[str]);
	}

	delete [] ndogam;

	return 0;
}
```

## Time Complexity
- map의 `operator[]`의 시간 복잡도는 O(log n)이고 이를 주어진 문자열 개수만큼 반복하니 최종 
시간 복잡도는 <b>O(nlogn)</b>이다.

## Space Complexity
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [이분 탐색](https://github.com/myoi-oj/baekjoon-oj#binarysearch), [이진 검색 트리](https://github.com/myoi-oj/baekjoon-oj#bst)
