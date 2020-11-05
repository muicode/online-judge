#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define rep(i,n) for(ll i=0;i<(n);++i)
#define rep2(i,a,n) for(ll i=a;i<(n);++i)

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define cfs(n) cout<<fixed<<setprecision((n))
#define endl '\n'

bool bruteforce(vector<int> nums, int target)
{
  const int SIZE = nums.size();
  
  // O(n)
  for (int i=0; i<SIZE-1; ++i)
  {
    // O(n)
    for(int j=i+1; j<SIZE; ++j) 
    {
      cout << nums[i] << ' ' << nums[j] << endl;
      if (nums[i] + nums[j] == target)
      {
        return true;
      }
    }
  }
  return false;
}

bool twopass(vector<int> nums, int target)
{
  unordered_map<int, int> umap; 
  const int SIZE = nums.size();
  
  // O(n)
  for (int i=0; i<SIZE; ++i)
  {
    umap.insert({nums[i], i});
  }

  // O(n)
  for (int i=0; i<SIZE; ++i)
  {
    // average O(1)
    auto search = umap.find(target - nums[i]);
    if (search != umap.end() && i != search->second) 
      return true;
  }

  return false;
}

bool onepass(vector<int> nums, int target)
{
  unordered_map<int, int> umap;
  const int SIZE = nums.size();

  // O(n)
  for (int i=0; i<SIZE; ++i)
  {
    // average O(1)
    auto search = umap.find(target - nums[i]);
    if (search != umap.end())
      return true;
    else 
      umap.insert({nums[i], i});
  }

  return false;
}

int main(){
  ios; cfs(15);

  vector<int> nums {10, 15, 3, 7};
  int target = 17;

  cout << ((bruteforce(nums, target)) ? "true" : "false") << endl;
  cout << ((twopass(nums, target)) ? "true" : "false") << endl;
  cout << ((onepass(nums, target)) ? "true" : "false") << endl;

  return 0;
}
