class Solution {
	public:
		int uniqueMorseRepresentations(vector<string>& words) {
			string morse[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
			map<string, int> mymap;

			for(string s : words)
			{
				string temp = "";
				for(char ch : s)
				{
					temp += morse[ch-'a'];        
				}
				mymap[temp]++;
			}

			return mymap.size();
		}
};
