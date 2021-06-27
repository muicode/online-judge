#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define P pair<ll,ll>
#define pb push_back
#define vi vector<ll>

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

int main(){
  ios; cfs(15);
  ll x,y,a,b;
  cin >> x >> y >> a >> b;
  ll exp = 0;

  while(1) {
    if (y/a < x) break;
    if (a*x >= y) break; // EXP exceeded
    if (a*x >= x+b) break; // better to add than multiply

    x *= a;
    ++exp;
  }

  exp += (y-1-x)/b;
  cout << exp << endl;
  return 0;
}
