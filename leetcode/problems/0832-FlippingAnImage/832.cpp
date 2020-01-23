class Solution {
	public:
		vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
			int index = 0;
			for(auto v : A)
			{
				int size = v.size();
				for(int i=0; i<size>>1; ++i)
				{
					swap(v[i], v[size-(i+1)]);
				}

				for(int i=0; i<size; ++i)
				{
					v[i] = !v[i];
				}
				A[index++] = v;
			}

			return A;
		}
};
