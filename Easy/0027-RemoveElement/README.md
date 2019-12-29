## [Leetcode](https://leetcode.com/)

[27. Remove Element](https://leetcode.com/problems/remove-element/)

- Time Complexity: O(n)
- Space Complexity: O(1)

```java
public class RemoveElement
{
    public int removeElement(int[] nums, int val) 
    {
        int i = 0;

        for (int j = 0; j<nums.length; ++j)
        {
            if (nums[j] != val)
            {
                nums[i++] = nums[j];
            }
        }

        return i;
    }
}
```
