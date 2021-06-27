/* 
 * B - Triple Dots
 * @author: jioneeu
 * @date: May 30th 2020
 * @ref: https://atcoder.jp/contests/abc168/tasks/abc168_b
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int k;
	string s;

	cin >> k;
	cin >> s;

	if (s.length() <= k) cout << s;
	else {
		s[k] = '\0';
		cout << s.c_str() << "...\n";
	}

	return 0;
}
