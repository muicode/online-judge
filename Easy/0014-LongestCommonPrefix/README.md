## [Leetcode](https://leetcode.com/)

[14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) (`String`)

### Horizontal Scanning
- Time Complexity: O(S)
- Space Complexity: O(1)

```java
public class LongestCommonPrefix
{
    public static String LCPHorizontalScanning(String[] strs) 
    {
        if (strs.length == 0) return "";

        String result = strs[0];
        for (int i=1; i<strs.length; ++i)
        {
            while (strs[i].indexOf(result) != 0) 
            {
                result = result.substring(0, result.length() - 1);
                if (result.isEmpty())
                {
                    return "";
                }
            }
        }

        return result;
    }
}
```

### Vertical Scanning
- Time Complexity: O(S)
- Space Complexity: O(1)

```java
public class LongestCommonPrefix
{
    public static String LCPVerticalScanning(String[] strs)
    {
        if (strs == null || strs.length == 0) return "";

        for (int i=0; i<strs[0].length(); ++i)
        {
            char c = strs[0].charAt(i);
            for (int j=1; j<strs.length; ++j)
            {
                if (i == strs[j].length() || strs[j].charAt(i) != c)
                {
                    return strs[0].substring(0, i);
                }
            }
        }

        // all same
        return strs[0];
    }
}
```


### Divide and Conquer
- Time Complexity: O(S), S = m\*n
- Space Complexity: O(m\*logn)

```java
public class LongestCommonPrefix
{
    public static String LCPDnC(String[] strs)
    {
        if (strs == null || strs.length == 0) return "";
        return LCPDnC(strs, 0, strs.length - 1);
    }

    public static String LCPDnC(String[] strs, int L, int R)
    {
        if (L == R) 
        {
            return strs[L];
        }
        else
        {
            int mid = L + (R - L) / 2;
            String LCPLeft = LCPDnC(strs, L, mid);
            String LCPRight = LCPDnC(strs, mid + 1, R);
            return commonPrefix(LCPLeft, LCPRight);
        }
    }

    public static String commonPrefix(String left, String right)
    {
        int min = Math.min(left.length(), right.length());
        for (int i=0; i<min; ++i)
        {
            if (left.charAt(i) != right.charAt(i))
            {
                return left.substring(0, i);
            }
        }
        return left.substring(0, min);
    }
}
```

### Binary Search
- Time Complexity: O(S\*logn), S = sum of all chars in all strings
- Space Complexity: O(1)

```java
public class LongestCommonPrefix
{
    public static String LCPBinarySearch(String[] strs)
    {
        if (strs == null || strs.length == 0) return "";

        int minLen = Integer.MAX_VALUE;
        for (String str : strs)
        {
            minLen = Math.min(minLen,  str.length());
        }

        int low = 1;
        int high = minLen;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (isCommonPrefix(strs, mid))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return strs[0].substring(0, (low + high) / 2);
    }

    public static boolean isCommonPrefix(String[] strs, int len)
    {
        String s1 = strs[0].substring(0, len);
        for (int i=1; i<strs.length; ++i)
        {
            if (!strs[i].startsWith(s1))
            {
                return false;
            }
        }
        return true;
    }
}
```
