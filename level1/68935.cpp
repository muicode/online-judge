#include <bits/stdc++.h>
using namespace std;

int solution(int n) {
  string base3 = "";

  while(n>2) {
    int div = n/3;
    int rem = n%3;
    base3 += to_string(rem);
    n /= 3;
  }
  base3 += to_string(n);

  int sum = 0;
  const int SIZE = base3.size();
  for(int i=SIZE-1, j=0; i>=0; --i, ++j) {
    sum = sum + (base3[i]-'0')*powl(3, j);
  }

  return sum;
}
