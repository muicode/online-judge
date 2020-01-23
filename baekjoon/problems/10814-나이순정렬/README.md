## 문제
- [10814번 나이순 정렬](https://www.acmicpc.net/problem/10814)

## C++
```cpp
#include <vector>
#include <iostream>
#include <map>

using namespace std;

int main(void) 
{
  cin.tie(NULL); cout.tie(NULL);
  ios_base::sync_with_stdio(false);

  map<int, vector<string> > mymap;
  int n;
  cin >> n;

  while(n--)
  {
    int age;
    string name;

    cin >> age >> name;

    if(mymap.find(age) == mymap.end()) 
    {
      vector<string> names;
      names.push_back(name);
      mymap[age] = names;
    }
    else 
    {
      mymap[age].push_back(name);
    }
  }

  auto it = mymap.begin();
  while(it!=mymap.end()) 
  {
    int age = it->first;
    vector<string> temp = it->second;
    for(size_t i=0; i<temp.size(); ++i) 
      cout << age << ' ' << temp[i] << '\n';
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
