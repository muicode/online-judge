## 문제
- [10989번 수 정렬하기 3](https://www.acmicpc.net/problem/10989)

## C++
```c++
#include <iostream>
#include <map>

using namespace std;

int main()
{
  cin.tie(NULL); cout.tie(NULL);
  ios_base::sync_with_stdio(false);

  map<short, short> mymap;
  int n, i, temp;
  short x;
  cin >> n;
  for( i=0; i<n; ++i) 
  {
    cin >> x;
    mymap[x]++;
  }

  auto it = mymap.begin();
  while(it!=mymap.end())
  {
    temp = it->second;
    for(i=0; i<temp; ++i) cout << it->first << '\n';
    ++it;
  }
  return 0;
}

```

## Complexity
- 시간 복잡도: <b>O(nlogn)</b>.
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [정렬](https://github.com/myoi-oj/baekjoon-oj#sort)
