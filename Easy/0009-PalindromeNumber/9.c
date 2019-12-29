#include <stdio.h>
#include <stdbool.h>

/*
 * Time Complexity(logn)
 * Space Complexity(1)
 */
bool isPalindrome(int x) 
{
	int original = x;
	if(x<0) return false;

	int rev = 0;
	while(x!=0)
	{
		int pop = x%10;
		x/=10;
		rev = rev * 10 + pop;
	}

	return original==rev ? true : false;
}

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d\n", isPalindrome(num));
	return 0;
}
