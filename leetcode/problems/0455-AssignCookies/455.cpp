class Solution {
	public:
		static bool compare(int a, int b)
		{
			return a > b;
		}
		int findContentChildren(vector<int>& g, vector<int>& s) {
			int rv = 0;

			sort(g.begin(), g.end());
			sort(s.begin(), s.end());

			for(int i=0; i<s.size(); ++i)
			{
				for(int j=0; j<g.size(); ++j)
				{
					if(g[j] && s[i] >= g[j])
					{
						s[i] -= g[j];
						g[j] = 0;
						++rv;
						break;
					}
				}
			}

			return rv;
		}
};
