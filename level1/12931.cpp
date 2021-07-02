#include <iostream>

using namespace std;
int solution(int n)
{
  int ret=0;
  while(n) {
    ret += n%10;
    n/=10;
  }
  return ret;
}
