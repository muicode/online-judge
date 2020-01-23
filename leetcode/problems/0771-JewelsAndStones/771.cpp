class Solution {
	public:
		int numJewelsInStones(string J, string S) {
			int occur[52] = {0};
			int size = S.size();

			for(int i=0; i<size; ++i)
			{
				if(S[i]>='A' && S[i]<='Z')
				{
					++occur[S[i]-'A'+26];
				}
				else
				{
					++occur[S[i]-'a'];
				}
			}

			int sum = 0;
			size = J.size();
			for(int i=0; i < size; ++i)
			{
				if(J[i]>='A' && J[i]<='Z')
				{
					sum += occur[J[i]-'A'+26];
				}
				else
				{
					sum += occur[J[i]-'a'];
				}
			}

			return sum;
		}
};
