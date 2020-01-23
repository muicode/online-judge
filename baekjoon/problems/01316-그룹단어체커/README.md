  ## 문제
- [1316번 그룹 단어 체커](https://www.acmicpc.net/problem/1316)

## C
```cpp
#include <stdio.h>

int main(void)
{
  int t, n=0;
  char str[101];
  scanf("%d", &t);

  while(t--)
  {
    scanf("%s", str);
    _Bool bSeen[26] = {0};
    
    int i=0;
    for(i=0; str[i]; ++i) 
    {
      if(str[i] != str[i+1]) 
      {
        if(bSeen[str[i]-'a']==1) 
        {
          break;
        }
        else 
        {
          bSeen[str[i]-'a']=1;
        }
      }
    }
    if(str[i]=='\0') ++n;
  }

  printf("%d\n", n);

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string), [탐색](https://github.com/myoi-oj/baekjoon-oj#search)
