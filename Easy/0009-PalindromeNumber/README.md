## [Leetcode](https://leetcode.com/)

[9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)

### Converting Integer to String
- Time Complexity: O(n) + O(toString())
- Space Complexity: O(length of x)

```java
public class PalindromeNumber {
    public static boolean isPalindrome(int x) {
        if (x < 0) return false;
        if (x < 10) return true;

        String s = String.valueOf(x);

        final int SIZE = s.length();

        for (int i=0; i<SIZE/2; ++i) {
            if (s.charAt(i) != s.charAt(SIZE-i-1)) {
                return false;
            }
        }

        return true;
    }
}
```

### Without converting
- Time Complexity: O(log x)
- Space Complexity: O(1)

```java
public class PalindromeNumber {
    public static boolean isPalindrome2(int x) {
        if (x < 0) return false;
        if (x < 10) return true;
        if (x % 10 == 0) return false;

        int rev = 0;
        while (x > rev) {
            System.out.printf("rev:%d    x:%d\n", rev, x);
            rev = rev * 10 + x % 10;
            x /= 10;
        }

        System.out.printf("rev:%d    x:%d\n", rev, x);

        return x == rev || x == rev/10;
    }
}
```
