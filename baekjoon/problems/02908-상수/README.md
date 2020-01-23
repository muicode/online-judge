  ## 문제
- [2908번 상수](https://www.acmicpc.net/problem/2908)

## C
```cpp
#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d%d", &a, &b);

  a = (a%10)*100 + ((a/10)%10)*10 + a/100;
  b = (b%10)*100 + ((b/10)%10)*10 + b/100;

  printf("%d\n", (a>b) ? a : b);

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
