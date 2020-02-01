## [Leetcode](https://leetcode.com/)

[58. Length of Last Word](https://leetcode.com/problems/length-of-last-word/)

- Time Complexity: O(n)
- Space Complexity: O(S); S -> number of chars from split()

```java
public class LeetCode {
	public static int lengthOfLastWord(String s) {
        if (s.contains(" ") == false)
        {
        	return s.length();
        }
        
        String[] str = s.split(" ");
        
        return str.length == 0 ? 0 : (str[str.length-1]).length();
    }
}
```
