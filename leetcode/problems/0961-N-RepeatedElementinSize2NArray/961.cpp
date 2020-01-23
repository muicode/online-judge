class Solution {
	public:
		int repeatedNTimes(vector<int>& A) {
			int n = A.size() >> 1;
			int arr[10001] = {0};

			for(int i=A.size()-1; i>=0; --i)
			{
				arr[A[i]]++;
				if(arr[A[i]] == n)
				{
					n = A[i];
					break;
				}
			}

			return n;
		}
};
