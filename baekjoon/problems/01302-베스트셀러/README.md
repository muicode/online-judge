## 문제
- [1302번 베스트셀러](https://www.acmicpc.net/problem/1302)

## C++
```cpp
#include <iostream>
#include <map>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  map<string, int> books;
  map<int, string> capacity;
  int n;

  cin >> n;

  while(n--)
  {
    string book;
    cin >> book;
    books[book]++;
  }

  auto it = books.begin();
  while(it != books.end())
  {
    auto it2 = capacity.find(it->second);
    if(it2 == capacity.end()) capacity[it->second] = it->first;
    ++it;
  }

  auto it2 = capacity.rbegin();
  cout << it2->second << endl;

  return 0;
}
```

## Complexity
- 시간 복잡도: <b>O(nlogn)</b>.
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [탐색](https://github.com/myoi-oj/baekjoon-oj#search)
