## 문제
- [10815번 숫자 카드](https://www.acmicpc.net/problem/10815)

## C++
```cpp
#include <iostream>
#include <map>

using namespace std;

int main(void)
{
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(false);

  map<int, int> card;
  int N,M,x;

  cin >> N;
  for(int i=0; i<N; ++i) 
  {
    cin >> x;
    card[x]++;
  }

  cin >> M;
  for(int i=0; i<M; ++i) 
  {
    cin >> x;
    card[x]++;
    cout << card[x] - 1 << ' ';
  }

  return 0;
}
```

## Time Complexity
- N개의 입력을 받고 추가하는데 O(NlogN), M개의 입력을 확인하는데 걸리는 시간은 O(MlogN)이다.
최종 시간 복잡도: <b>O(max(NlogN,MlogN))</b>.

## Space Complexity
- 공간 복잡도: <b>O(N)</b>.

## Tags
- [이분 탐색](https://github.com/myoi-oj/baekjoon-oj#binarysearch)
