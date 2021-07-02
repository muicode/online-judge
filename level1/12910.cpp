#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
  vector<int> answer;
  const int SIZE = arr.size();
  for(int i=0; i<SIZE; ++i) {
    if(arr[i]%divisor==0) answer.push_back(arr[i]);
  }
  sort(answer.begin(), answer.end());
  if(answer.size()==0) answer.push_back(-1);
  return answer;
}
