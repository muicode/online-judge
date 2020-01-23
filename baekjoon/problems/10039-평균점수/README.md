## 문제
- [10039번 평균 점수](https://www.acmicpc.net/problem/10039)

## C
```cpp
#include <stdio.h>

int main(void)
{
  int avg = 0;

  for(int i=0; i<5; ++i) 
  {
    int score;
    scanf("%d", &score);

    avg += (score < 40) ? 40 : score;
  }

  printf("%d\n", avg/5);

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
