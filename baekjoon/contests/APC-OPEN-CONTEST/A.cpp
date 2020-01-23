#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

static int x = []()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

int main()
{
	int N,L,K;
	int total = 0;
	int sub1[101] = {0};
	int sub2[101] = {0};

	scanf("%d %d %d", &N, &L, &K);

	for(int i=1; i<=N; ++i)
	{
		int s1, s2;
		scanf("%d %d", &s1, &s2);

		sub1[i] = s1;
		sub2[i] = s2;
	}
	
	for(int i=1; i<=N && K; ++i)
	{
		if(sub2[i] <= L)
		{
			sub2[i] = sub1[i] = L+1;
			total += 140;
			--K;
		}
	}

	for(int i=1; i<=N && K; ++i)
	{
		if(sub1[i] <= L)
		{
			sub2[i] = sub1[i] = L+1;
			total += 100;
			--K;
		}
	}

	cout << total << endl;

	return 0;
}	
