#include <iostream>
using namespace std;

// goes up 1 or 2 steps
int staircase(int n, int a=1, int b=1) 
{
  if (n==0) return a;
  if (n==1) return b;
  return staircase(n-1, b, a + b);
}

// can go up any number of steps in the list
int staircase2(int n, int *arr) 
{
  if (n<=1) return 1;

  int *dp = new int[n+1];
  dp[0] = 1;
  for(int i=1; i<n+1; ++i) 
  {
    for(int v=0; arr[v]; ++v) 
    {
      if (i-arr[v] >= 0) 
        dp[i] += dp[i-arr[v]];
    }
  }
  int temp = dp[n];
  delete [] dp;
  return temp;
}

int main()
{
  int n;
  cin >> n;

  cout << staircase(n) << endl;
  int *arr = new int[3];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  cout << staircase2(n, arr) << endl;
}
