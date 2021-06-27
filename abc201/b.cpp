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
  int n;
  map<int, string> a;
  cin >> n;
  for(int i=0; i<n; ++i) {
    string s;
    int t; 
    cin >> s >> t;
    a.insert(pair<int, string>(t, s));
  }

  auto it = a.rbegin();
  ++it;
  cout << it->second << endl;

  return 0;
}
