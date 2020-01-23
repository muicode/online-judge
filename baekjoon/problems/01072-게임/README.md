## 문제
- [1072번 게임](https://www.acmicpc.net/problem/1072)

## C-1
```cpp
#include <stdio.h>

int main(void)
{
  long long x, y;
  while(scanf("%lld %lld", &x, &y) != EOF)
  {
    int z = y*100 / x;
    if(z>98) {printf("-1\n"); continue;}
    long long low = 1, high = 1000000000;
    long long ngame;

    while(low<=high) 
    {
      int game = low + (high-low)/2;
      long long nz = (y+game)*100/(x+game);

      if(nz>z) 
      {
        high = game - 1;
        ngame = game;
      }
      else 
      {
        low = game + 1;
      }
    }

    printf("%lld\n", ngame);
  }
  return 0;
}
```

## C-2
```cpp
#include <stdio.h>

int main(void)
{
  long long x, y;
  while(scanf("%lld %lld", &x, &y) != EOF)
  {
    int z = y*100 / x;
    if(z >= 99) { printf("-1\n"); continue; }
    long long i = (z*x+x-100*y-1)/(100-z-1) + 1;
    printf("%lld\n", i);
  }
  return 0;
}
```

## Time Complexity
- `C-1` 코드의 경우 이분 탐색을 사용해 시간 복잡도는 <b>O(logn)</b>가 된다.
- `C-2` 코드의 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- `C-1` 코드의 공간 복잡도: <b>O(1)</b>.
- `C-2` 코드의 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math), [이분 탐색](https://github.com/myoi-oj/baekjoon-oj#binarysearch), [브루트포스](https://github.com/myoi-oj/baekjoon-oj#bruteforce) 
