## 문제
- [1427번 소트인사이드](https://www.acmicpc.net/problem/1427)

## C
```c
#include <stdio.h>

#define LENGTH 11

void merge(char *a, int p, int q, int r) 
{
  char b[r];
  int i = p;
  int j = q+1;
  int k = 0;

  while(i<=q && j<=r) 
  {
    if(a[i] > a[j]) b[k++] = a[i++];
    else b[k++] = a[j++];
  }

  while(i <= q) b[k++] = a[i++];
  while(j <= r) b[k++] = a[j++];

  for(i=r; i>=p; --i) a[i] = b[--k];
}

void mergeSort(char *a, int p, int r) 
{
  int q;

  if(p < r) 
  {
    q = p + (r-p)/2;
    mergeSort(a, p, q);
    mergeSort(a, q+1, r);
    merge(a, p, q, r);
  }
}

int main(void) 
{
  unsigned n;
  char str[LENGTH] = {0};

  scanf("%d", &n);

  int cnt = 0;
  for(int i=0; n; ++i, ++cnt)
  {
    str[i] = n%10+48;
    n/=10;
  }

  mergeSort(str, 0, cnt-1);
  printf("%s\n", str);
  return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(nlogn)</b>.
- 공간 복잡도: <b>O(len(n))</b>.

## Tags
- [정렬](https://github.com/myoi-oj/baekjoon-oj#sort)
