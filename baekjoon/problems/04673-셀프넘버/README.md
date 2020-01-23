## 문제
- [4673번 셀프 넘버](https://www.acmicpc.net/problem/4673)

## C++
```cpp
#include <cstdio>
#include <vector>

using namespace std;

int d(int a)
{
	int sum = a;
	while(a>0)
	{
		sum += a%10;
		a/=10;
	}

	return sum;
}
int main(void)
{
	const int SIZE = 10001;
	vector<bool> selfnum(SIZE, true);
	selfnum[0]=false;

	for(int target=1; target<SIZE; ++target)
	{
		while(selfnum[target]==false)
		{
			++target;
		}

		for(int i=target; i<SIZE;)
		{
			i = d(i);
			selfnum[i] = false;
		}
	}

	for(int i=1; i<SIZE; ++i)
	{
		if(selfnum[i]) printf("%d\n", i);
	}

	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O()</b>.

## Space Complexity
- 공간 복잡도: <b>O(10000)</b>.

## Tags
- [에라토스테네스의 체](https://github.com/myoi-oj/baekjoon-oj#sieve)
