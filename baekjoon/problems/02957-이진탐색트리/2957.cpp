#include <iostream>
#include <cstdio>
#include <map>

static int x = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

using namespace std;

int main()
{
	map<long, long> node;
	long n, d, c=0;
	scanf("%ld", &n);
	node[0] = -1;
	node[300001] = -1;
		
	while(n--)
	{
		scanf("%ld", &d);
		node[d] = 0;
	
		map<long,long>::iterator it = node.find(d);
		auto l_it = it;
		auto r_it = it;

		node[d] = max((--l_it)->second + 1, (++r_it)->second + 1);
	
		c += node[d];
		printf("%ld\n", c);
	}

	return 0;
}
