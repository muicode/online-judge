## [Leetcode](https://leetcode.com/)

[28. Implement strStr()](https://leetcode.com/problems/implement-strstr/) (`Two Pointers` `String)

- Time Complexity: O(h\*n); h = haystack.length, n = needle.length
- Space Complexity: O(1)

### Bruteforce

```java
public class Strstr
{
	public static int strStr(String haystack, String needle)
	{
		if (haystack.isEmpty() && needle.isEmpty()) return -1;
		if (needle.isEmpty()) return 0;

		final int HAYSTACK_SIZE = haystack.length();
		final int NEEDLE_SIZE = needle.length();

		for (int i=0; i<HAYSTACK_SIZE; ++i)
		{				
			if (haystack.charAt(i) == needle.charAt(0))
			{
				boolean isSame = true;
				for (int j=1; j<NEEDLE_SIZE; ++j)
				{
					if (i+j >= HAYSTACK_SIZE || haystack.charAt(i+j) != needle.charAt(j))
					{
						isSame = false;
						break;
					}
				}

				if (isSame)
				{
					return i;
				}
			}
		}

		return -1;
	}
}
```

### Bruteforce 2
- Time Complexity: O(h-n); h = haystack.length, n = needle.length
- Space Complexty: O(1)
- by [@inception\_wzd](https://leetcode.com/problems/implement-strstr/discuss/12807/Elegant-Java-solution)

```java
public class Strstr
{
    public static int strStr2(String haystack, String needle)
    {
        if (needle.isEmpty()) return 0;
        final int H_SIZE = haystack.length();
        final int N_SIZE = needle.length();
        
        for (int i=0; i<=H_SIZE - N_SIZE; ++i)
        {
            for (int j=0; j<N_SIZE && haystack.charAt(i+j) == needle.charAt(j); ++j)
            {
                if (j == N_SIZE - 1) return i;
            }
        }
        return -1;
    }
```
