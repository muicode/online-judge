class Solution {
	public:
		bool checkRecord(string s) {
			int A = 0;

			for(int i=0; i<s.size(); ++i)
			{
				if(s[i] == 'A') ++A;
				if(A > 1) return false;

				if(i+2 < s.size() && s[i] == 'L' && s[i+1]=='L' && s[i+2]=='L') return false;
			}

			return true;
		}
};
