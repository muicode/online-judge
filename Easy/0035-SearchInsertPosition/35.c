#include <stdio.h>

int searchInsert(int *nums, int size, int target)
{
	if(nums == NULL || size == 0) return 0;
	if(target > nums[size-1]) return size;

	int low = 0;
	int high = size;

	while(low <= high)
	{
		int mid = low + (high-low)/2;

		if(nums[mid] == target) return mid;
		else if(nums[mid] < target) low = mid+1;
		else high = mid-1;
	}

	return low;
}

int main(void)
{
	int nums[] = {5, 7, 10};
	int target;
	scanf("%d", &target);

	printf("%d\n", searchInsert(nums, sizeof(nums)/sizeof(int), target));

	return 0;
}
