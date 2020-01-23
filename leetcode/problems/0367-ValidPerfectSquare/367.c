#include <stdio.h>
#include <stdbool.h>

/*
 * Used babylonian algorithm
 * Time Complexity: O(1) or O(c), where c=20
 * Space Complexity O(1)
 */
bool isPerfectSquare(int num) {
	int ultimate = num%10;
	if(ultimate==2 || ultimate ==3 || ultimate==7 || ultimate==8) 
	{
		return false;
	}
	else
	{
		// babylonian algorithm
		float x = (float)num;
		float g = x/2;

		for(int i=0; i<20; ++i)
		{
			g = (g + x/g)/2;
		}

		return (g - (int)g)*100 == 0;
	}
}

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d\n", isPerfectSquare(num));
	return 0;
}
