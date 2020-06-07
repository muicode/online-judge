#pragma GCC optimize("O3")

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)
#define repr(i,n) for(ll i=n;i>=0; --i)
#define repr2(i,a,n) for(ll i=n;i>=a; --i)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define vi vector<int>
#define vb vector<bool>
#define vll vector<ll>
#define vpi vector<pii>
#define vpll vector<pll>
#define VEC(v) vector<v >

#define INT(...) int __VA_ARGS__;IN(__VA_ARGS__)
#define LL(...) ll __VA_ARGS__;IN(__VA_ARGS__)
#define ULL(...) ull __VA_ARGS__;IN(__VA_ARGS__)
#define STR(...) string __VA_ARGS__;IN(__VA_ARGS__)
#define CHR(...) char __VA_ARGS__;IN(__VA_ARGS__)
#define DBL(...) double __VA_ARGS__;IN(__VA_ARGS__)
#define LD(...) ld __VA_ARGS__;IN(__VA_ARGS__)

int scan(){ return getchar(); }
void scan(int& a){ cin>>a; }
void scan(long long& a){ cin>>a; }
void scan(char &a){cin>>a;}
void scan(double &a){ cin>>a; }
void scan(long double& a){ cin>>a; }
void scan(char a[]){ scanf("%s", a); }
void scan(string& a){ cin >> a; }
template<class T> void scan(vector<T>&);
template<class T, size_t size> void scan(array<T, size>&);
template<class T, class L> void scan(pair<T, L>&);
template<class T, size_t size> void scan(T(&)[size]);
template<class T> void scan(vector<T>& a){ for(auto& i : a) scan(i); }
template<class T> void scan(deque<T>& a){ for(auto& i : a) scan(i); }
template<class T, size_t size> void scan(array<T, size>& a){ for(auto& i : a) scan(i); }
template<class T, class L> void scan(pair<T, L>& p){ scan(p.first); scan(p.second); }
template<class T, size_t size> void scan(T (&a)[size]){ for(auto& i : a) scan(i); }
template<class T> void scan(T& a){ cin >> a; }

void IN(){}
template <class Head, class... Tail> void IN(Head& head, Tail&... tail){ scan(head); IN(tail...); }

int in() {int x;cin>>x;return x;}
ll llin() {unsigned long long x;cin>>x;return x;}

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'
#define ret return 0

constexpr ll mod=998244353;
constexpr ll mod2=10e9+7;
const double PI = 3.1415926535897932384626433832795028841971; //acos(-1)

template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
// endmacro

int main(){
  ios; cfs(15);

  INT(a, p);
  vi v;
  v.pb(a);
  while(true) {
    int next = 0;
    while(a!=0) {
      next += pow(a%10, p);
      a/=10;
    }

    rep(i, v.size()) {
      if(v[i] == next)  {
        cout<<i<<endl;
        ret;
      }
    }

    v.pb(next);
    a=next;
  }
  ret;
}
