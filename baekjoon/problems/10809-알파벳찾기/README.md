  ## 문제
- [10809번 알파벳 찾기](https://www.acmicpc.net/problem/10809)

## C
```cpp
#include <stdio.h>

#define ALPHABETS 26
#define WORD_LEN 100

int main(void)
{
  char freq[] = {[0 ... ALPHABETS] = -1};
  char str[WORD_LEN + 1];
  scanf("%s", str);

  for(int i=0; str[i]; ++i)
  {
    if(freq[str[i]-'a']==-1) 
    {
      freq[str[i]-'a'] = i;
    }
  }

  for(int i=0; i<ALPHABETS; ++i) 
  {
    printf("%d ", freq[i]);
  }

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(1)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
