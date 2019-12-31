#include <stdio.h>

int strStr(char* haystack, char* needle) {
	if(needle[0] == '\0' || needle == NULL)
	{
		return 0;
	}

	int index = -1;
	for(int i=0; haystack[i]; ++i)
	{
		if(haystack[i] == needle[0])
		{
			index = i;
			for(int j=1; needle[j]; ++j)
			{
				if(haystack[i+j] != needle[j])
				{
					index = -1;
					break;
				}
			}

			if(index != -1)
			{
				return index;
			}
		}
	}

	return index;
}

int main(void)
{
	char *haystack = "hello world";
	char *needle = "el";

	printf("haystack: %s\n", haystack);
	printf("needle: %s\n", needle);
	printf("%d\n", strStr(haystack, needle));

	return 0;
}
