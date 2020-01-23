## 문제
- [10816번 숫자 카드 2](https://www.acmicpc.net/problem/10816)

## C++
```cpp
#include <stdio.h>
#include <unordered_map>

using namespace std;

unordered_map<int, int> card;
int N,M,x;

int main(void)
{
  scanf("%d", &N);
  for(int i=0; i<N; ++i) 
  {
    scanf("%d", &x);
    card[x]++;
  }

  scanf("%d", &M);
  for(int i=0; i<M; ++i) 
  {
    scanf("%d", &x);
    printf("%d ", card[x]);
  }

  return 0;
}
```

## Time Complexity
- unordered\_map의 `operator[]`의 시간 복잡도는 O(1)이기 때문에 N개의 입력을 받고 추가하는데 O(N), M개의 입력을 확인하는데 걸리는 시간은 O(M)이다. 최종 시간 복잡도: <b>O(max(N,M))</b>.

## Space Complexity
- 공간 복잡도: <b>O(N)</b>.

## Tags
- [이분 탐색](https://github.com/myoi-oj/baekjoon-oj#binarysearch)
