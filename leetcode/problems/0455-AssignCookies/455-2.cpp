static int x=[](){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

class Solution {
	public:
		int findContentChildren(vector<int>& g, vector<int>& s) {
			int rv = 0;

			sort(g.begin(), g.end());
			sort(s.begin(), s.end());

			for(int i=0, j=0; i<g.size(); ++i)
			{
				while(j < s.size())
				{
					if(s[j]>=g[i])
					{
						++rv;
						++j;
						break;
					}
					else
					{
						++j;
					}

				}
			}

			return rv;
		}
};
