#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int h1,m1,h2,m2,k;
	cin >> h1 >> m1 >> h2 >> m2 >> k;

	int min1 = h1*60 + m1 + k;
	int min2 = h2*60 + m2;
	int diff = min2 - min1;
	cout << diff;

	return 0;
}
