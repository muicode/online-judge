#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
 * Time Complexity: O(n)
 * Space Complexity: O(n+1)
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
	if(digits[digitsSize-1] < 9)
	{
		digits[digitsSize-1]++;
		*returnSize = digitsSize;
		return digits;
	}

	int *ans = malloc(sizeof(*ans) * (digitsSize+1));
	// using a memset did not work so i'm manually assigning it
	for(int i=digitsSize; i>=0; --i)
	{
		ans[i] = 0;
	}

	// flags used to determine whether to just copy values or carry over
	bool carry = false;
	bool done = false;

	for(int i=digitsSize-1; i>=0; --i)
	{
		if(!done && digits[i] == 9)
		{
			ans[i] = 0;
			carry = true;
		}
		else if(carry)
		{
			ans[i] = digits[i]+1;
			carry = false;
			done = true;
		}
		else
		{
			ans[i] = digits[i];
		}
	}

	if(ans[0] == 0)
	{
		*returnSize = digitsSize + 1;
		ans[0] += 1;
	}
	else
	{
		*returnSize = digitsSize;
	}

	return ans;
}

int main(int argc, char **argv)
{
	int nums[] = {2,9,9,9,9};
	int size = 0;
	
	int *newNums = plusOne(nums, sizeof(nums)/sizeof(int), &size);

	for(int i=0; i<size; ++i)
	{
		printf("%d ", newNums[i]);
	}
	printf("\n");

	free(newNums);
	return 0;
}
