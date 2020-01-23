## 문제
- [10174번 팰린드롬](https://www.acmicpc.net/problem/10174)

## C++
```cpp
#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    const int SIZE = str.size();
    const int HALF = SIZE >> 1;

    for (int i=0; i<HALF; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }

        if (str[i] != str[SIZE - i - 1])
        {
            return false;
        }   
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    getchar();
    for (int i=0; i<n; ++i)
    {
        string s;
        getline(cin, s);
        cout << ((isPalindrome(s)) ? "Yes" : "No") << endl;     
    }
   
    return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n*m)</b>.
  + `m` => string length

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
