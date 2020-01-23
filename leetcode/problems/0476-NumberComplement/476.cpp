static int x = []()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;    
}();

class Solution {
	public:
		// 1st solution
		int findComplement(int num) {
			int mask = 1;
			int temp = num;
			while(temp!=1)
			{
				temp >>= 1;
				mask = (mask<<1) | 1;
			}

			return ~num & mask;
		}

		// 2nd solution
		int findComplement2(int num) {
			int rv = 0;
			int i = 0;
			while(num)
			{
				if(!(num&1))
				{
					rv |= 1 << i;
				}

				num >>= 1;
				++i;
			}

			return rv;
		}
};
