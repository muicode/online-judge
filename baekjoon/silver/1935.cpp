#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

constexpr ll mod=998244353;
constexpr ll mod2=10e9+7;
const double PI = 3.1415926535897932384626433832795028841971; //acos(-1)

int main(){
  ios; cfs(2);
  int n;
  string expr;
  double value[26];
  cin>>n;
  cin>>expr;
  rep(i, n) {
    cin>>value[i];
  }

  vector<double> nums;
  const int SIZE = expr.size();
  rep(i, SIZE) {
    if(expr[i]>='A' && expr[i]<='Z') {
      nums.push_back(value[expr[i]-65]);
    } else {
      double a = nums.back();
      nums.pop_back();
      double b = nums.back();
      nums.pop_back();

      switch(expr[i]) {
      case '+':
        nums.push_back(a+b); break;
      case '-':
        nums.push_back(b-a); break;
      case '*':
        nums.push_back(a*b); break;
      case '/':
        nums.push_back(b/a); break;
      }
    }
  }
  cout<<nums.back()<<endl;
  return 0;
}
