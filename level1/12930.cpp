#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
  string ret="";
  int index=0;
  const  int SIZE = s.size();
  for(int i=0; i<SIZE; ++i,++index) {
    if(s[i]==' ') index=-1;
    if((index&1) == 0) ret += toupper(s[i]);
    else ret += tolower(s[i]);
  }
  return ret;
}
