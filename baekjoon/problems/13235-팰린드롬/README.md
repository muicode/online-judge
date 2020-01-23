## 문제
- [13235번 팰린드롬](https://www.acmicpc.net/problem/13235)

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
        if (str[i] != str[SIZE - i - 1])
        {
            return false;
        }   
    }

    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << ((isPalindrome(s)) ? "true" : "false") << endl;
    return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
