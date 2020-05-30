/* 
 * C - Colon
 * @author: jioneeu
 * @date: May 30th 2020
 * @ref: https://atcoder.jp/contests/abc168/tasks/abc168_c
 */

#include <bits/stdc++.h>
#define rep(i,n) for (int i=0; i<(n); ++i)

using namespace std;
using ll = long long;
using P = pair<int,int>;

const double PI = acos(-1);

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, h, m;
	cin >> a >> b >> h >> m;
	double th = double(h*60+m)/720 * 2*PI;
	double tm = double(m)/60 * 2*PI;
	double xh = a*cos(th), yh = a*sin(th);
	double xm = b*cos(tm), ym = b*sin(tm);
	double dx = xh-xm, dy = yh-ym;
	double ans = sqrt(dx*dx + dy*dy);
	printf("%.10f\n", ans);

	return 0;
}
