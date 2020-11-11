#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

/* 
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 * */
void naive(int *arr, const int SIZE)
{
  unsigned long mult = 1;
  for(int i=0; i<SIZE; ++i)
  {
    mult *= arr[i];
  }

  for(int i=0; i<SIZE; ++i)
  {
    arr[i] = mult / arr[i];
  }
}

/*
 * Time complexity: O(N^2)
 * Space complexity: O(N) 
 * */
void bruteforce(int *arr, const int SIZE)
{
  int *temp = new int[SIZE];
  for (int i=0; i<SIZE; ++i)
  {
    int val = 1;
    for (int j=0; j<SIZE; ++j)
    {
      if (i != j) 
      {
        val = val * arr[j];
      }
    }
    temp[i] = val;
  }

  for (int i=0; i<SIZE; ++i)
  {
    arr[i] = temp[i];
  }

  delete [] temp;
}

void print(int *arr, const int SIZE)
{
  for (int i=0; i<SIZE; ++i)
  {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int main(){
  ios; cfs(15);
  int arr[] = {1, 2, 3, 4, 5};
  const int SIZE = sizeof(arr) / sizeof(int);

//  bruteforce(arr, SIZE);
  naive(arr, SIZE);
  print(arr, SIZE);

  return 0;
}
