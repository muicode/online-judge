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

#define SUM(n) (((n)*(n+1)) / 2)
int main(){
  ios; cfs(15);
  int target;
  cin >> target;
  for(int i=1; i<1000000001; ++i) {
    if(SUM(i) >= target) {
      cout << i; 
      return 0;
    }
  }
  return 0;
}
