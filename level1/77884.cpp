#include <bits/stdc++.h>
using namespace std;

int getFactor(int n) {
  int cnt = (n>1) ? 2 : 1;

  for(int i=2; i<n; ++i) {
    if(n%i!=0) continue;
    ++cnt;
  }
  return cnt;
}

int solution(int left, int right) {
  int sum = 0;

  for(int i=left; i<=right; ++i) {
    int x = getFactor(i);
    sum = sum + (((x&1)==0) ? i : -1*i);
  }

  return sum;
}
