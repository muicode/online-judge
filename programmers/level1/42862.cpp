#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
  int answer = 0;

  vector<int> roster(n, 1);
  for(int a : reserve) ++roster[a-1];
  for(int a : lost) --roster[a-1];
  for(int i=0; i<n; ++i) {
    if(roster[i]) ++ answer;
    else {
      if(i-1 >= 0 && roster[i-1] > 1) {
        ++answer;
        roster[i]++;
      }
      else if(i+1 < n && roster[i+1] > 1) {
        ++answer;
        roster[i]++;
        roster[i+1]--;
      }
    }
  }
  return answer;
}
