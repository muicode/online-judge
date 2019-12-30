## [Leetcode](https://leetcode.com/)

[7. Reverse Integer](https://leetcode.com/problems/reverse-integer) (`Math`)

- Time Complexity: O(log(x) - 1) = O(log(x))
- Space Complexity: O(1)

```java
public class ReverseInteger {
    public static int reverse(int x) {
        int sol = 0;

        while (x != 0) {
            // checking for the overflow
            if ((sol * 10) / 10  != sol) {
                return 0;
            }
            sol = sol * 10 + x % 10;
            x /= 10;
        }

        return sol;
    }
}
```
