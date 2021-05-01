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
  vector<char> t;

  for(int i=0; i<s.length(); ++i) {
    if(s[i]=='R') {
      reverse(t.begin(), t.end());
    } else {
      t.pb(s[i]);
    }
  }

  for(int i=0;i<t.size(); ++i){
    if(t[i] == t[i+1]){
      t[i] = t[i+1] = '\0';
      t.erase(remove(t.begin(), t.end(),'\0'), t.end());
      i -= 2;
    }
  }

  for(int i=0; i<t.size(); ++i)
    cout << t[i];
  cout << endl;
  return 0;
}
