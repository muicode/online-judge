  ## 문제
- [5622번 다이얼](https://www.acmicpc.net/problem/5622)

## C
```cpp
#include <stdio.h>

int main(void)
{
  char dial[26] = "22233344455566677778889999";
  char str[16];
  int seconds = 0;

  scanf("%s", str);

  for(int i=0; str[i]; ++i) 
  {
    seconds += ((dial[str[i]-'A']-'0')+1);
  }

  printf("%d\n", seconds);

  return 0;
}
```

## Time Complexity
- 시간 복잡도는 <b>O(1)</b>.

## Space Complexity
- 공간 복잡도는 <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
