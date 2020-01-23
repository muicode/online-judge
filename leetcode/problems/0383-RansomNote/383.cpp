static int x=[](){
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

class Solution {
	public:
		bool canConstruct(string ransomNote, string magazine) {
			int rnAlpha[26] = {0};
			int mAlpha[26] = {0};

			for(int i=0; i<ransomNote.size(); ++i)
				rnAlpha[ransomNote[i]-'a']++;

			for(int i=0; i<magazine.size(); ++i)
				mAlpha[(magazine[i]-'a')]++;

			for(int i=0; i<26; ++i)
			{
				if(rnAlpha[i] > mAlpha[i])
				{
					return false;
				}
			}

			return true;
		}
};
