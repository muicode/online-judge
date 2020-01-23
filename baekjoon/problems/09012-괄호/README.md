## 문제
- [9012번 괄호](https://www.acmicpc.net/problem/9012)

## C++
```cpp
#include <stdio.h>
#include <stack>

using namespace std;

#define LENGTH 51

int main(int argc, char **argv)
{
	int t;

	scanf("%d", &t);

	while(t--)
	{
		stack<int> open;
		bool bIsVPS = true;
		char ps[LENGTH] = {0};	
		scanf("%s", ps);

		for(int i=0; ps[i]; ++i)
		{
			if(ps[i]==')')
			{
				if(open.empty())
				{
					bIsVPS = false;
					break;
				}
				else
				{
					open.pop();
				}
			}
			else
			{
				open.push('(');
			}
		}

		if(open.empty() && bIsVPS)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}

```

## Time Complexity
- 시간 복잡도: <b>O(len(ps))</b>.

## Space Complexity
- 공간 복잡도: <b>O((len(vps))/2)</b>.

## Tags
- [스택](https://github.com/myoi-oj/baekjoon-oj#stack)
