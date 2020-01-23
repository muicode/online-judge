  ## 문제
- [2920번 음계](https://www.acmicpc.net/problem/2920)

## C
```cpp
#include <stdio.h>

int main(void)
{
  _Bool bAsc = 0;
  _Bool bDes = 0;
  int a, b;

  scanf("%d", &a);
  for(int i=0; i<7; ++i)
  {
    scanf("%d", &b);
    
    (a>b) ? (bDes = 1) : (bAsc = 1);

    a = b;
  }

  if(bAsc && !bDes)
  {
    printf("ascending\n");
  }
  else if(!bAsc && bDes)
  {
    printf("descending\n");
  }
  else
  {
    printf("mixed\n");
  }

  return 0;
}
```

## Time Complexity
- 시간 복잡도는 <b>O(1)</b>.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [구현](https://github.com/myoi-oj/baekjoon-oj#implementation)
