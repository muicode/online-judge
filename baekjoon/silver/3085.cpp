#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

vector<string> arr;

int check(int n) {
  int hor, ver;
  int max = 1;

  for(int i=0; i<n; ++i) {
    hor = 1;
    ver = 1;
    for(int j=0; j<n-1; ++j)
      if(arr[i][j] == arr[i][j+1]) {
        ++hor;
      } else {
        max = (max < hor) ? hor : max;
        hor = 1;
      }

    for(int k=0; k<n-1; ++k) 
      if(arr[k][i] == arr[k+1][i]) {
        ++ver;
      } else {
        max = (max < ver) ? ver : max;
        ver = 1;
      }

    max = (hor > max) ? hor : max;
    max = (ver > max) ? ver : max;
  }

  return max;
}

int main(){
  ios; cfs(15);
  int n;
  cin>>n;
  int max = -1;

  for(int i=0; i<n; ++i) {
    string s;
    cin >> s;
    arr.push_back(s);
  }

  for(int i=0; i<n; ++i) {
    for(int j=0; j<n-1; ++j) {
      // horizontal swap
      swap(arr[i][j], arr[i][j+1]);
      int val = check(n);
      max = (val > max) ? val : max;
      swap(arr[i][j], arr[i][j+1]);

      // vertical swap
      swap(arr[j][i], arr[j+1][i]);
      val = check(n);
      max = (val > max) ? val : max;
      swap(arr[j][i], arr[j+1][i]);
    }
  }
  cout << max << endl;
  return 0;
}
