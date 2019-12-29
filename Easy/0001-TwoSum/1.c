#include <stdio.h>
#include <stdlib.h>

/* 
 * Brute Force version
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 */
int* twoSumBF(int* nums, int numsSize, int target)
{
	for(int i=0; i<numsSize-1; ++i)
	{
		for(int j=i+1; j<numsSize; ++j)
		{
			// equivalent to 
			// if(nums[j] == target-num[i])
			if(nums[i] + nums[j] == target)
			{
				int *ans = malloc(sizeof(*ans) * 2);
				ans[0] = i;
				ans[1] = j;
				return ans;
			}
		}
	}

	return NULL;
}

int main(void)
{
	int nums[] = {2,3,11,4,15, 5};
	int *answer = twoSumBF(nums, sizeof(nums)/sizeof(int), 9);
	printf("%d %d\n", answer[0], answer[1]);
	
	return 0;
}
