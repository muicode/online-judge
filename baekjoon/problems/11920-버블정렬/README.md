## 문제
- [11920 버블정렬](https://www.acmicpc.net/problem/11920)

## C++
```cpp
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int n, k;
	priority_queue<int, vector<int>, greater<int> > pq;

	scanf("%d %d", &n, &k);
	for(int i=0; i<n; ++i)
	{
		int data;
		scanf("%d", &data);
		pq.push(data);
	
		if(i>=k)
		{
			cout << pq.top() << " ";
			pq.pop();
		}
	}

	while(!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	return 0;
}
```

## Time Complexity
- 우선순위 큐에 데이터를 개별적으로 삽입하는 경우 (heap 구조) 시간 복잡도는 O(n\*logn)이다. 이 문제에서 큐는 최대 `k`개의 데이터만을 삽입하므로
시간 복잡도는 **O(k\*logk), k<=n**이다.

## Space Complexity
- 우선순위 큐는 `k`개의 데이터만 유지하면 되기에 공간 복잡도는 **O(k), k<=n**가 된다.

## Tags
- [수열](https://github.com/myoi-oj/baekjoon-oj#permutation)
