/*************************************************
 * @problem->	2439 | Print Rev. Right Triangle
 * @brief->	Read N and print N line? size? triangle
 * @author->	jmyoui
 * @date->	2018年6月13日
 ************************************************/

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n-(i+1); ++j)
		{
			printf(" ");
		}
		for(int j=0; j<i+1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
