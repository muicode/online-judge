class Solution {
	public:
		string removeOuterParentheses(string S) {
			string sol = "";
			int cnt=0;

			for(auto s : S)
			{
				if(s == '(')
				{
					if(cnt++) sol+=s;
				}
				else
				{
					if(--cnt) sol+=s;
				}
			}
			return sol;
		}
};
