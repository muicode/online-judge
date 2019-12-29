#include <stdio.h>
#include <stdlib.h>

/*
 * Vertical scanning
 * Time Complexity: O(n*min(len(S)), S = sets of strings
 * Space Complextiy: O(1)
 */
char* longestCommonPrefix(char** strs, int strsSize) {
	int cnt=0;
	int j=0;

	if(strsSize == 1)
	{
		return strs[0];
	}

	for(int j=0;j!=-1;++j)
	{
		for(int i=0; i<strsSize-1; ++i)
		{
			if(strs[i][j] == '\0' || strs[i+1][j]=='\0')
			{
				j = -2;
				break;
			}
			else if(strs[i][j] == strs[i+1][j])
			{
				if((i+1) == strsSize-1)
				{
					++cnt;
				}
				continue;
			}
			else
			{
				j = -2;
				break;
			}
		}
	}

	char *str = malloc(sizeof(*str)*(cnt+1));
	for(int i=0; i<cnt; ++i)
	{
		str[i] = strs[0][i];
	}
	str[cnt] = '\0';

	return str;
}

int main(void)
{
	int size = 1;
	char **str = malloc(sizeof(**str) * size);
	str[0] = "flower";
	printf("\"%s\"\n", longestCommonPrefix(str, size));
	return 0;
}
