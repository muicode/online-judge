#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define P pair<int,int>
#define pb push_back
#define vi vector<int>

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

int main(){
  ios; cfs(15);
  vector<int> a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  
  if(a[2] - a[1] == a[1] - a[0]) cout << "Yes";
  else cout << "No";
  return 0;
}
