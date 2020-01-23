  ## 문제
- [10988번 팰린드롬인지 확인하기](https://www.acmicpc.net/problem/10988)

## C++
```cpp
#include <iostream>
using namespace std;

int isPalindrome(string str)
{
    const int SIZE = str.size();
    const int HALF = SIZE >> 1;

    for (int i=0; i<HALF; ++i)
    {
        if (str[i] != str[SIZE - i - 1])
        {
            return 0;
        }   
    }

    return 1;
}

int main()
{
    string s;
    cin >> s;
    cout << isPalindrome(s) << endl;
    return 0;
}
```

## Time Complexity
- 시간 복잡도: O(n/2) = <b>O(n)</b>.

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
