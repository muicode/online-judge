## 문제
- [1011번 Fly me to the Alpha Centauri](https://www.acmicpc.net/problem/1011)

## C
```cpp
#include <stdio.h>
int main(void)
{
    int t, x, y;
    scanf("%d", &t);
    while(t--)
    {
      scanf("%d%d", &x, &y);
      y -= x;
      int cnt = 0, i = 1;
      for(; y>i*2; ++i, cnt+=2) y-=i*2;
      cnt += (y/i);
      if(y%i) ++cnt;
      printf("%d\n", cnt);
    }
  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)

## Reference
- https://www.acmicpc.net/board/view/13747
