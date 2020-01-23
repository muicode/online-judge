class Solution {
	public:
		vector<int> sortedSquares(vector<int>& A) {       
			int neg=0;

			for(int i=A.size()-1; i>=0; --i)
			{
				if(A[i] < 0) ++neg;
				A[i] *= A[i];
			}

			vector<int> rv;
			int pos = neg;
			neg = neg-1;

			while(neg >= 0 && pos < A.size())
			{
				rv.push_back(A[neg]<A[pos] ? A[neg--] : A[pos++]);
			}

			while(neg>=0)
			{
				rv.push_back(A[neg--]);
			}

			while(pos < A.size())
			{
				rv.push_back(A[pos++]);
			}
			return rv;
		}
};
