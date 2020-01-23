  ## 문제
- [1157번 단어 공부](https://www.acmicpc.net/problem/1157)

## C
```cpp
#include <stdio.h>
#include <ctype.h>

#define LENGTH 1000000
#define ALPHABET 26

int main(void)
{
  char str[LENGTH+1], letter;
  int freq[ALPHABET] = {0};
  int max = -1;

  scanf("%s", str);

  // O(n)
  for(int i=0; str[i]; ++i) 
  {
    freq[tolower(str[i])-'a']++;
  }

  // O(26) = O(c) = O(1)
  for(int i=0; i<ALPHABET; ++i) 
  {
    if(freq[i] > max)
    {
      max = freq[i];
      letter = i+'A';
    }
    else if(freq[i] == max) 
    {
      letter = '?';
    }
  }

  printf("%c\n", letter);
  
  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
