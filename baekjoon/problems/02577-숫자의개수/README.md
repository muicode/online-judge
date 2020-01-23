  ## 문제
- [2577번 숫자의 개수](https://www.acmicpc.net/problem/2577)

## C
```cpp
#include <stdio.h>

#define DIGITS 10

int main(void)
{
  int a, b, c;
  char digits[DIGITS] = {0};
  scanf("%d%d%d", &a, &b, &c);

  a = a*b*c;

  while(a)
  {
    ++digits[a%10];  
    a/=10;
  }

  for(int i=0; i<DIGITS; ++i)
  {
    printf("%d\n", (int)digits[i]);
  }

  return 0;
}
```

## Time Complexity
- `a`\*`b`\*`c`의 자릿수만큼 반복을 하므로 시간 복잡도는 <b>O(m), m=len(a\*b\*c)</b>가 된다.

## Space Complexity
- 공간 복잡도는 O(DIGITS) = O(10) 으로 상수이므로 <b>O(1)</b> 다.

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation)
