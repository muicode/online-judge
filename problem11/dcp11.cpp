#include <iostream>
#include <vector>
using namespace std;

vector<string> autocomplete(string query, vector<string> &strs)
{
  vector<string> ret;
  const int querySize = query.size();

  for(string s : strs)
  {
    if(querySize > s.size()) 
    {
      continue;
    }

    bool skip = false;
    for(int i=0; i<querySize; ++i)
    {
      if(query[i] != s[i]) 
      {
        skip = true;
        break;
      }
    }

    if(!skip)
    {
      ret.push_back(s);
    }
  }

  return ret;
}

int main(void)
{
  string query = "de";
  vector<string> strs;
  strs.push_back("dog");
  strs.push_back("deer");
  strs.push_back("deal");

  vector<string> results = autocomplete(query, strs);

  for(string s : results)
  {
    cout << s << endl;
  }
  return 0;
}
