#include <iostream>
#include <vector>
#include <map>

using namespace std;

/* 
 * Brute Force version
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */
vector<int> twoSumBF(vector<int>& nums, int target)
{
	vector<int> ans;
	const size_t SIZE = nums.size();

	for(int i=0; i<SIZE-1; ++i)
	{
		for(int j=i+1; j<SIZE; ++j)
		{
			if(nums[i] + nums[j] == target)
			{
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	}

	return ans;
}

/* 
 * Two Pass Hash table version
 * Time Complexity: O(nlogn)
 * Space Complexity: O(n)
 */
vector<int> twoSumTwoPassHT(vector<int>& nums, int target) {
	map<int, int> mymap;
	vector<int> vect;

	for(int i=0; i<nums.size(); ++i)
	{
		mymap[nums[i]] = i;
	}

	for(int i=0; i<nums.size(); ++i)
	{
		int complement = target - nums[i];
		if(mymap.find(complement) != mymap.end() && mymap[complement] != i)
		{
			vector<int> temp{i, mymap[complement]};
			vect = temp;
			break;
		}
	}
	return vect;
}

/* 
 * One Pass Hash table version
 * Time Complexity: O(nlogn)
 * Space Complexity: O(n)
 */
vector<int> twoSumOnePassHT(vector<int>& nums, int target) {
	map<int, int> mymap;
	vector<int> vect;

	for(int i=0; i<nums.size(); ++i)
	{
		int complement = target - nums[i];

		if(mymap.find(complement) != mymap.end())
		{
			vector<int> temp{mymap[complement], i};
			vect = temp;
			break;
		}
		mymap[nums[i]] = i;
	}
	return vect;
}

int main()
{
	std::ios::sync_with_stdio(false); 
	cin.tie(NULL);

	vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);

	//vector<int> ans = twoSumBF(nums, 9);
	//vector<int> ans = twoSumTwoPassHT(nums, 9);
	vector<int> ans = twoSumOnePassHT(nums, 9);

	cout << ans.front() << ' ' << ans.back() << endl;

	return 0;
}
