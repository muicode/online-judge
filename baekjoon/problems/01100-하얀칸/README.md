  ## 문제
- [1100번 하얀 칸](https://www.acmicpc.net/problem/1100)

## C
```cpp
#include <stdio.h>

int main(void)
{
  int cnt=0;
  char ch[9];

  for(int i=0; i<8; ++i) 
  {
    scanf("%s", ch);
    for(int j=0; j<8; ++j) 
    {
      if((j+i)%2 == 0 && ch[j]=='F') ++cnt;
    }
  }

  printf("%d\n", cnt);
  return 0;
}
```

## Time Complexity
- 시간 복잡도:  <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string), [탐색](https://github.com/myoi-oj/baekjoon-oj#search)
