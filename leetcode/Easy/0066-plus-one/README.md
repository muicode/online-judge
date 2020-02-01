## [Leetcode](https://leetcode.com/)

[66. Plus One](https://leetcode.com/problems/plus-one)

- Time Complexity: O(n); n -> length of digits + 1
- Space Complexity: O(n); n -> number of items in ArrayList

```java
class Solution {
    public static int[] plusOne(int[] digits) {
        List<Integer> list = new ArrayList<>();
        boolean raise = true;

        for (int i=digits.length-1; i>=0; --i)
        {
            if (raise)
            {
                int val = (digits[i] + 1) % 10;
                if (val != 0)
                {
                    raise = false;
                }
                list.add(val);
            }
            else
            {
                list.add(digits[i]);
            }
        }

        if (raise)
        {
            list.add(1);
        }

        int[] result = new int[list.size()];

        ListIterator<Integer> iter = list.listIterator(list.size());
        int  i= 0;
        while(iter.hasPrevious())
        {
            result[i++] = iter.previous();
        }

        return result;
    }
}
```
