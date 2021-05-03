#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, K;
  string S;

  cin >> N >> K >> S;
  S[K-1] += 32;
  cout << S << endl;

  return 0;
}
