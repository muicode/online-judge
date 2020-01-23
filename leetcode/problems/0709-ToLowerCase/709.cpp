class Solution {
	public:
		string toLowerCase(string str) {
			for(int i=str.length()-1; i>=0; --i)
			{
				if(str[i]>=65 && str[i]<=90)
				{
					str[i] += 32;
				}
			}

			return str;
		}
};
