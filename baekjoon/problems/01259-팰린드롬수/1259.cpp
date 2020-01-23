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
