## 문제
- [번](https://www.acmicpc.net/problem/)

## C-1
```cpp
#include <stdio.h>

int main(void)
{
  unsigned n, room=2;
  int cnt = 1;
  int ftr = 6;

  scanf("%d", &n);

  while(room <= n)
  {
    room += ftr;
    ftr += 6;
    ++cnt;
  }

  printf("%d\n", cnt);

  return 0;
}
```

## C-2
```cpp
#include <stdio.h>

int main(void)
{
  unsigned n;
  int cnt = 1, i = 0;

  scanf("%d", &n);

  while(1)
  {
    unsigned int temp = 1 + 3*i*(i+1);
    if(n==1) break;
    if(temp < n) ++cnt;
    else break;
    ++i;
  }

  printf("%d\n", cnt);

  return 0;
}
```

## Time Complexity
- `C-1` 코드의 시간 복잡도: O(n/6) = <b>O(n)</b>.
- `C-2` 코드의 시간 복잡도: O(n/6) = <b>O(n)</b>.

## Space Complexity
- `C-1` 코드의 공간 복잡도: <b>O(1)</b>.
- `C-2` 코드의 공간 복잡도: <b>O(1)</b>.

## Tags
- [수학](https://github.com/myoi-oj/baekjoon-oj#math)
