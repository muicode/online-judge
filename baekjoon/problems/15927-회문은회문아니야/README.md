## 문제
- [15927번 회문은 회문아니야!!](https://www.acmicpc.net/problem/15927)

## C
```cpp
#include <iostream>
#include <cstdio>

using namespace std;

static int x = []()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

int main(void)
{
    string s;
    cin >> s;
    int length = s.size();
    int half_length = length >> 1;
    bool possible = false;

    for (int i=0; i<half_length; ++i)
    {
        if (s[i] != s[length - i - 1])
        {
            printf("%d\n", length);
            goto EXIT;
        }
        else if (s[i] != s[i+1])
        {
            possible = true;
        }
    }

    printf("%d\n", (possible ? length - 1 : -1));

EXIT:
	return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/muicode/baekjoon-oj#string)
