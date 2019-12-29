void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*
 * Time Complexity: O(n)
 * Space Complextiy: O(1)
 */
int removeElement(int* nums, int numsSize, int val) {
	int cnt = 0;

	if(numsSize==0) 
	{
		return cnt;
	}

	for(int i=0; i<numsSize; ++i)
	{
		if(nums[i] == val) ++cnt;
	}

	if(cnt == numsSize)
	{
		return 0;
	}

	int index = 0;
	int i = 0;
	while(index < cnt)
	{
		if(nums[i] == val)
		{
			swap(&nums[i], &nums[numsSize-(index+1)]);
			++index;
			--i;
		}
		++i;
	}

	return numsSize-cnt;
}
