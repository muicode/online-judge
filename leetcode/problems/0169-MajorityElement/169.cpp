#include <iostream>
#include <vector>
#include <map>

using namespace std;

/*
 * Time Complexity : O(nlogn)
 * Space Complexity: O(n) I think
 */
int majorityElement(vector<int>& nums) {
	map<int, int> mymap;

	for(int i=nums.size()-1; i>=0; --i) mymap[nums[i]]++;

	auto it = mymap.begin();

	int majority = nums.size() >> 1;
	while(it!=mymap.end())
	{
		if(it->second > majority)
		{
			return it->first;
		}
		++it;
	}
	return 0;
}
