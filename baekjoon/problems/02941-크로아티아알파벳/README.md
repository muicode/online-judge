  ## 문제
- [2941번 크로아티아 알파벳](https://www.acmicpc.net/problem/2941)

## C
```cpp
#include <stdio.h>

int main(void)
{
  char str[101];
  int cnt=0;

  scanf("%s", str);

  for(int i=0; str[i]; ++i) 
  {
    char ch = str[i];
    if(ch=='d')
    {
      i = (str[i+1]=='-') ? i+1 :
        (str[i+1]=='z' && str[i+2]=='=') ? i+2 : i;
    }

    i = (ch=='c' && (str[i+1]=='=' || str[i+1]=='-')) || 
      (ch=='l' && str[i+1]=='j') || (ch=='n' && str[i+1]=='j') || 
      (ch=='s' && str[i+1]=='=') || (ch=='z' && str[i+1]=='=') ? i+1 : i;

    ++cnt;
  }

  printf("%d\n", cnt);

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(len(str))</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
