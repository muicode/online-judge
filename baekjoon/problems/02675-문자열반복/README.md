  ## 문제
- [2675번 문자열 반복](https://www.acmicpc.net/problem/2675)

## C
```cpp
#include <stdio.h>

#define LENGTH 20

int main(void)
{
  int t;
  scanf("%d", &t);

  while(t--)
  {
    int r;
    char str[LENGTH+1];
    scanf("%d %s", &r, str);

    for(int i=0; str[i]; ++i)
    {
      for(int j=0; j<r; ++j) 
      {
        printf("%c", str[i]);
      }
    }

    printf("\n");
  }
  return 0;
}
```

## Time Complexity
- 문자열의 각 문자를 `r`번 출력하므로 최종 시간 복잡도는 <b>O(n\*r), n = len(str)</b>가 된다.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
