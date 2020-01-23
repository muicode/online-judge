  ## 문제
- [8958번 OX퀴즈](https://www.acmicpc.net/problem/8958)

## C
```cpp
#include <stdio.h>

#define LEN 80

int main(void)
{
  int t;
  char ox[LEN+1];
  scanf("%d", &t);

  while(t--)
  {
    int total = 0;
    int point = 1;
    scanf("%s", ox);

    for(int i=0; ox[i]; ++i)
    {
      if(ox[i]=='O')
      {
        total += point;
        ++point;
      }
      else
      {
        point = 1;
      }
    }

    printf("%d\n", total);
  }

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
