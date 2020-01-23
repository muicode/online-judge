## 문제
- [1259번 팰린드롬](https://www.acmicpc.net/problem/1259)

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
	while(true)
	{
		cin >> s;
        if (s[0] == '0') break;
		cout << ((isPalindrome(s)) ? "yes" : "no") << endl;
	}
    return 0;
}
```

## Time Complexity
- 시간 복잡도: <b>O(n*m)</b>.
  + `n` -> test cases
  + `m` -> string length

## Space Complexity
- 공간 복잡도: <b>O(1)</b>.

## Tags
- [문자열](https://github.com/myoi-oj/baekjoon-oj#string)
