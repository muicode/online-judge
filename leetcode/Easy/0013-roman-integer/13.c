#include <stdio.h>

int romanToInt(char* s) {
	int num=0;

	while(*s)
	{
		switch(*s)
		{
			case 'L': num += 50; break;
			case 'V': num += 5; break;
			case 'D': num += 500; break;
			case 'M': num += 1000; break;
			case 'I':
				{
					if(*(s+1)=='X')
					{
						num += 9;
						++s;
					}
					else if(*(s+1)=='V')
					{
						num += 4;
						++s;
					}
					else
					{
						++num;
					}
				}
				break;
			case 'X':
				{
					if(*(s+1)=='C')
					{
						num += 90;
						++s;
					}
					else if(*(s+1)=='L')
					{
						num += 40;
						++s;
					}
					else
					{
						num += 10;
					}
				}
				break;
			case 'C':
				{
					if(*(s+1)=='M')
					{
						num += 900;
						++s;
					}
					else if(*(s+1)=='D')
					{
						num += 400;
						++s;
					}
					else
					{
						num += 100;
					}
				}
				break;
			defualt:
				;
		}
		++s;
	}
	return num;
}

int main(void)
{
	char s[256];
	scanf("%s", s);
	printf("%d\n", romanToInt(s));
	return 0;
}
