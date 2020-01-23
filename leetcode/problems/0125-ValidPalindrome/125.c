#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAlpha(char *ch)
{
	if(*ch >= 'A' && *ch <= 'Z')
	{
		*ch += 32;
		return true;
	}
	else if(*ch >= 'a' && *ch <= 'z')
	{
		return true;
	}
	else if(*ch >= '0' && *ch <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isPalindrome(char* s)
{
	if(s==NULL) return true;

	// extract misc chracters
	const int _len = strlen(s);
	int index = 0;

	for(int i=0; i<_len; ++i)
	{
		if(isAlpha(&s[i]) == false)
		{
			while(isAlpha(&s[i+1]) == false)
			{
				++i;
				if(s[i] == '\0') 
				{
					break;
				}
			}
			s[index] = s[i+1];
		}
		else
		{
			s[index++] = s[i];
		}
	}

	if(index==0) return true;
	s[index] = '\0';

	for(int i=0, j=index>>1; i<j; ++i)
	{
		if(s[i] != s[index-(i+1)])
		{
			return false;
		}
	}

	return true;
}

int main(void)
{
	char s[255];
	fgets(s, 255, stdin);
	s[strlen(s)-1] = '\0';

	printf("%d\n", isPalindrome(s));

	return 0;
}
