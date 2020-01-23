#include <stdio.h>

int mySqrt(int x) {
	if(x<=1) return x;
	int low = 1;
	int high = x;

	while(low<high)
	{
		int mid = low + (high-low)/2;

		if(mid<=x/mid)
		{
			low = mid+1;
		}
		else 
		{
			high = mid;
		}
	}

	return high-1;
}

int main(void)
{
	for(int i=2; i<=100; i+=2)
	{
		printf("%d: %d\n", i, mySqrt(i));
	}

	return 0;
}
