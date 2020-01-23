class Solution {
	public:
		vector<int> sortArrayByParity(vector<int>& A) {
			auto beg = A.begin();
			auto rbeg = A.rbegin();

			for(int i=A.size()-1; i>=0; --i)
			{
				if(*beg & 1 == 1)
				{
					swap(*beg, *rbeg);
					++rbeg;
				}
				else
				{
					++beg;
				}
			}

			return A;
		}
};
