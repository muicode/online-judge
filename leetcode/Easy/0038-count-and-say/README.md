## [Leetcode](https://leetcode.com/)

[38. Count and Say](https://leetcode.com/problems/count-and-say/)

- Time Complexity: O(n \* S); S = length of all chars in each sequence
- Space Complexity: O(n \* S) ?
  + not quite sure....

```java
public class CountAndSay
{
    static String[] ant = null;
    
    public static String[] generateSequences()
    {
        if (ant == null)
        {
            final int SIZE = 31;
            ant = new String[SIZE];
            ant[0] = null;
            ant[1] = "1";
            ant[2] = "11";
            
            for (int i=3; i<SIZE; ++i)
            {
                String str = "";
                int count = 1;
                char num = ant[i-1].charAt(0);
                for (int j=1; j<ant[i-1].length(); ++j)
                {
                    if (ant[i-1].charAt(j) == num)
                    {
                        ++count;
                    }
                    else
                    {
                        str = str + count + num;
                        count = 1;
                        num = ant[i-1].charAt(j);
                    }
                }
                str = str + count + num;
                ant[i] = str;
            }
        }
        
        return ant;
    }
    
    public static String countAndSay(int n) 
    {       
        generateSequences();
        return ant[n];
    }
}
```
