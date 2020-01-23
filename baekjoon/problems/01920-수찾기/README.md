## 문제
- [1920번 수 찾기](https://www.acmicpc.net/problem/1920)

## C++
```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, arr[100000], num;

int binarySearch(int low, int high, int target)
{
  while(low<=high)
  {
    int mid = low + (high-low)/2;
    if(arr[mid] == target) return 1;
    else if(arr[mid] < target) low = mid+1;
    else high = mid-1;
  }
  return 0;
}
int main(void)
{
  scanf("%d", &N);
  for(int i=0; i<N; ++i) 
    scanf("%d", &arr[i]);

  sort(arr, arr+N);
  scanf("%d", &M);
  for(int i=0; i<M; ++i) 
  {
    scanf("%d", &num);
    printf("%d\n", binarySearch(0, N-1, num));
  }

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(nlogn)</b>.

## Space Complexity
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [이분 탐색](https://github.com/myoi-oj/baekjoon-oj#binarysearch)
