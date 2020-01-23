## 문제
- [2751번 수 정렬하기 2](https://www.acmicpc.net/problem/2751)

## C
```c
#include <stdio.h>
#include <stdlib.h>

void print(int, int *);
void mergeSort(int *, int, int);
void merge(int *, int, int, int);

int n;

int main(int argc, char **argv)
{
  int n;
  int *arr;
  scanf("%d", &n);

  arr = malloc(n * sizeof(*arr));

  for(int i=0; i<n; ++i)
  {
    scanf("%d", &arr[i]);
  }

  mergeSort(arr, 0, n-1);
  print(n, arr);

  free(arr);
  return 0;
}

void print(int n, int *arr)
{
  for(int i=0; i<n; ++i)
  {
    printf("%d\n", arr[i]);
  }
}

void mergeSort(int *a, int p, int r)
{
  int q;

  if(p < r) 
  {
    q = p + (r - p)/2;
    mergeSort(a, p, q);
    mergeSort(a, q + 1, r);
    merge(a, p, q, r);
  }
}

void merge(int *a, int p, int q, int r)
{
  int b[r];
  int i = p;
  int j = q+1;
  int k = 0;

  while(i<=q && j<=r) 
  {
    if(a[i] < a[j]) b[k++] = a[i++];
    else b[k++] = a[j++];
  }

  while(i<=q) b[k++] = a[i++];
  while(j<=r) b[k++] = a[j++];

  for(int i = r; i>=p; --i) a[i] = b[--k];
}
```

## Complexity
- 시간 복잡도: <b>O(nlogn)</b>.
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [정렬](https://github.com/myoi-oj/baekjoon-oj#sort)
