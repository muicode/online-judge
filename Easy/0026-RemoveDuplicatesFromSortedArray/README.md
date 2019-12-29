## [Leetcode](https://leetcode.com/)

[26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

- Time Complexity: O(n)
- Space Complexity: O(1)

```java
public class RemoveDuplicatesFromSortedArray
{
    public int removeDuplicates(int[] nums) 
    {
        if (nums.length == 0) return 0;

        final int SIZE = nums.length;
        int pos = 0;
        int i = 1;

        for (; i<SIZE; ++i)
        {
            if (nums[i-1] != nums[i])
            {
                nums[pos++] = nums[i-1];
            }
        }

        nums[pos] = nums[i-1];
        return pos + 1;
    }
}
```
