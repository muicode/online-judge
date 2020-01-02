## [Leetcode](https://leetcode.com/)

[53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

### Dynamic Programming
- Time Complexity: O(n)
- Space Complexity: O(n)

```java
package Leetcode;

public class MaximumSubarray
{
    public static int maxSubArray(int[] nums) 
    {
        final int SIZE = nums.length;
        int[] result = new int[SIZE];
        result[0] = nums[0];
        int max = nums[0];
        
        for (int i=1; i<SIZE; ++i)
        {
            result[i] = (result[i-1] > 0 ? result[i-1] : 0) + nums[i];
            if (result[i] > max) 
            {
                max = result[i];
            }
        }

        return max;
    }
}
```
