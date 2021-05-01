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
  string s; cin >> s;
  int c=0;
  for(int i=0; i<s.length(); ++i) {
    if(s[i]=='Z' && s[i+1]=='O' && s[i+2]=='N' && s[i+3]=='e') {
      ++c;
      i += 3;
    }
  }
  cout<<c<<endl;
  return 0;
}
