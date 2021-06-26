#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

int main(){
  ios; cfs(15);
  map<unsigned long long, unsigned long long> m;
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; ++i) {
    unsigned long long t;
    scanf("%llu", &t);
    m[t]++;
  }

  auto it = m.begin();
  unsigned long long prev = it->second;
  vector<unsigned long long> v;
  ++it;
  v.push_back(0);
  while(it != m.end()) {
    v.push_back(prev * it->second);
    prev = prev + (it->second);
    ++it;
  }

  unsigned long long cnt = 0;

  for(unsigned long long z : v) cnt += z;
  cout << cnt << endl;
  return 0;
}
