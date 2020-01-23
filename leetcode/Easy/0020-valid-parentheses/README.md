## [Leetcode](https://leetcode.com/)

[20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) (`String`, `Stack`)

- Time Complexity: O(S), S = # of chars
- Space Complexity: O(P), P = # of open parenthesis

```java
public class ValidParenthesis
{
    public static boolean isValid(String s) {
        char[] str = s.toCharArray();

        Stack<Character> stack = new Stack<>();
        for (char ch : str)
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                stack.push(ch);
            }
            else
            {
                if (stack.isEmpty() == true)
                {
                    return false;
                }
                char popped = stack.pop();
                if (ch == ')' && popped != '(') return false;
                if (ch == '}' && popped != '{') return false;
                if (ch == ']' && popped != '[') return false;
            }
        }

        return stack.size() == 0;
    }
    ```
