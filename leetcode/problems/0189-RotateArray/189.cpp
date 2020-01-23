/* Time Complexity: O(n)
 * Space Complexity: O(n)
 */

static int x = []()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

class Solution {
	public:
		// 1st solution
		void rotate(vector<int>& nums, int k) {
			k = k % nums.size();
			vector<int> rv;

			for(int i=nums.size()-k; i<nums.size(); ++i)
			{
				rv.push_back(nums[i]);
			}
			for(int i=0; i<nums.size()-k; ++i)
			{
				rv.push_back(nums[i]);
			}

			for(int i=0; i<rv.size(); ++i)
			{
				nums[i] = rv[i];
			}
		}

		// 2nd solution
		void rotate2(vector<int>& nums, int k) {
			k = k % nums.size();
			int count = 0;

			for(int i=0; count<nums.size(); ++i)
			{
				int curr = i;
				int prev = nums[i];
				do
				{
					int next = (curr + k) % nums.size();
					int temp = nums[next];
					nums[next] = prev;
					prev = temp;
					curr = next;
					++count;
				}while(i != curr);
			}
		}

		// 3rd solution
		void rotate3(vector<int>& nums, int k) {
			k %= nums.size();
			reverse3(nums, 0, nums.size()-1);
			reverse3(nums, 0, k-1);
			reverse3(nums, k, nums.size()-1);
		}

		void reverse3(vector<int> &nums, int p, int q)
		{
			while(p < q)
			{
				int temp = nums[p];
				nums[p] = nums[q];
				nums[q] = temp;

				++p;
				--q;
			}
		}
};
