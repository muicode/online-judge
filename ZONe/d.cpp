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
  vector<char> t2;
  vector<char> t3;
  vector<char> t4;
  bool rev = false;

  for(char c : s) {
    if(c=='R') rev = !rev;
    else {
      if(rev) t2.pb(c);
      else t.pb(c);
     }
  }

  for(int i=t2.size()-1;i>=0;--i)
    t3.pb(t2[i]);
  for(char x : t)
    t3.pb(x);

  if(t3.size())
    t4.pb(t3[0]);
  for(int i=1; i<t3.size(); ++i) {
    if(t4.back() != t3[i]) t4.pb(t3[i]);
    else t4.pop_back();
  }
  
  if(rev)
    for(int i=t4.size()-1; i>=0; --i) cout << t4[i];
  else
    for(char c : t4) cout << c ;
  cout<<endl;
 return 0;
}
