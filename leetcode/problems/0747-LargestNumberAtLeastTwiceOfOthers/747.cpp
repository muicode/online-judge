static int x = []()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}()a;

class Solution {
	public:
		int dominantIndex(vector<int>& nums) {
			int pos = 0;
			int L = nums[0];
			int sL = L*L;
			int tL = 0;

			for(int i=1; i<nums.size(); ++i)
			{
				if(nums[i] > L) L=nums[i], pos=i;

				int temp = nums[i]<<1;
				if(temp > sL) tL=sL, sL=temp;
				else if(temp > tL) tL = temp;
			}

			return (tL>L) ? -1 : pos;
		}
};
