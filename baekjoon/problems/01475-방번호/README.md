  ## 문제
- [1475번 방 번호](https://www.acmicpc.net/problem/1475)

## C
```cpp
#include <stdio.h>

int main(void)
{
  int n;
  int num[10] = {0};
  int max = 1;
  scanf("%d", &n);

  while(n!=0) 
  {
    int a = n%10;
    num[a]++;
    n/=10;
  }

  num[6] += num[9];
  if(num[6]+num[9]>=2) num[6]=num[6]/2.0+0.5;

  for(int i=0; i<9; ++i) 
  {
    if(num[i] > max) max = num[i];
  }

  printf("%d\n", max);

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(4)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math), [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
