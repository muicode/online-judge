#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=(a);i<(n);++i)
#define P pair<int,int>
#define pb push_back
#define vi vector<int>

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

int main(){
  ios; cfs(15);

  ll n;
  cin >> n;
  set<ll> s;
  for (ll x=1; x*x <= n; ++x) {
    if (n%x != 0) continue;
    s.insert(x);
    s.insert(n/x);
  }

  for (ll x : s) cout << x << endl;

  return 0;
}
