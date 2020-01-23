#include <stdio.h>

/*
 * Time Complexity: O(n)
 * Space Complextiy: O(1)
 */
int removeDuplicates(int* nums, int numsSize) {
	if(numsSize==0)
	{
		return 0;
	}

	int cnt = 0;

	for(int i=0; i<numsSize-1; ++i)
	{
		if(nums[i] != nums[i+1])
		{
			nums[cnt] = nums[i];
			++cnt;
		}
	}

	nums[cnt] = nums[numsSize-1];

	return cnt+1;
}

int main(void)
{
	int nums[] = {0,0,1,1,2,3,4,5};
	int size = sizeof(nums) / sizeof(int);

	size = removeDuplicates(nums, size);

	for(int i=0; i<size; ++i)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");

	return 0;
}
