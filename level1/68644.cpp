#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers) {
  vector<int> answer;

  const int SIZE = numbers.size();
  for(int i=0; i<SIZE-1; ++i) {
    for(int j=i+1; j<SIZE; ++j)
      answer.push_back(numbers[i] + numbers[j]);
  }

  sort(answer.begin(), answer.end());
  auto it = unique(answer.begin(), answer.end());
  answer.erase(it, answer.end());
  return answer;
}
