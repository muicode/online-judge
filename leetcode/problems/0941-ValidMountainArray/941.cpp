static int x = []()
{
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

class Solution {
	public:
		bool validMountainArray(vector<int>& A) {        
			const int size = A.size();
			int i = 0;
			if(size < 3) return false;

			while(i+1 < size && A[i] < A[i+1]) ++i;

			if(i==0 || i==size-1) return false;

			while(i+1 < size && A[i] > A[i+1]) ++i;

			return i == size-1;        
		}
};
