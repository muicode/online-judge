## 문제
- [7785번 회사에 있는 사람](https://www.acmicpc.net/problem/7785)

## C++
```cpp
#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios::sync_with_stdio(false);

  int n;
  string name;
  map<string, int> mymap;

  cin >> n;
  while(n--)
  {
    string log;
    cin >> name >> log;

    mymap[name] = (log[0]=='l') ? 0 : 1;
  }

//  map<string, int>::reverse_iterator it = mymap.rbegin();
  auto it = mymap.rbegin();

  while(it != mymap.rend())
  {
    if(it->second)
      printf("%s\n", (it->first).c_str());
    ++it;
  }

  return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(nlogn)</b>.

## Space Complexity
- 공간 복잡도: <b>O(n)</b>.

## Tags
- [스택](https://github.com/myoi-oj/baekjoon-oj#stack)
