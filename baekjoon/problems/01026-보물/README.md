## 문제
- [1026번 보물](https://www.acmicpc.net/problem/1026)

## C
```c
#include <stdio.h>
#include <stdlib.h>

char A[50], B[50];
int cmp(const void *a, const void *b) 
{
  return (*(char *)a < *(char *)b) ? -1 : 1;
}

int main(void) 
{
  int n, i, s = 0;
  scanf("%d", &n);
  for(i=0;i<n;++i) scanf("%d", &A[i]);
  for(i=0;i<n;++i) scanf("%d", &B[i]);
  qsort(A, n, 1, cmp);
  qsort(B, n, 1, cmp);
  for(i=0;i<n;++i) s += (int)A[i] * B[n-i-1];
  printf("%d\n", s);

  return 0;
}
```

## Complexity
- C의 표준에서 `qsort()`의 시간 복잡도의 정의는 없으나 아마 <b>(nlogn)</b>가 아닐까 생각해본다. 
- 공간 복잡도는 **O(n)** 이다.

## C++
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool rev (int a, int b) { return (a>b); }

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);

  vector<int> A, B;
  int n,x;

  cin >> n;

  for(int i=0; i<n; ++i) 
  {
    cin >> x;
    A.push_back(x);
  }

  for(int i=0; i<n; ++i) 
  {
    cin >> x;
    B.push_back(x);
  }

  sort(A.begin(), A.end());
  sort(B.begin(), B.end(), rev);

  x = 0;
  for(int i=0; i<n; ++i) x+=A[i]*B[i];
  cout << x << '\n';

  return 0;
}
```

## Complexity
- C++ `sort()`의 시간 복잡도는 O(nlogn)이므로 최종 시간 복잡도 또한 <b>O(nlogn)</b>이다.
- 공간 복잡도는 <b>O(n)</b>이다.

## Tags
- [정렬](https://github.com/myoi-oj/baekjoon-oj#sort), [탐색](https://github.com/myoi-oj/baekjoon-oj#search
