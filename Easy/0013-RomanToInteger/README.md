## [Leetcode](https://leetcode.com/)

[13. Roman to Integer](https://leetcode.com/problems/roman-to-integer/)

### yutingGuo Solution
- Time Complexity: O(n)
- Space Complexity: O(n)

```java
public class RomanToInteger {
    public static int romanToInt2(String s) 
    {
        HashMap<Character, Integer> map = new HashMap<>();
        map.put('I', 1);
        map.put('V', 5);
        map.put('X', 10);
        map.put('L', 50);
        map.put('C', 100);
        map.put('D', 500);
        map.put('M', 1000);
        char[] chars = s.toCharArray();
        int result = 0;
        final int SIZE = chars.length;

        int i = 0, j = 1;
        for(; j < SIZE; ++i, ++j) 
        {
            int val = map.get(chars[i]);
            if (val >= map.get(chars[j]))
            {
                result += val;
            }
            else
            {
                result -= val;
            }
        }

        result += map.get(chars[i]);
        return result;
    }
}
```

### My solution
- Time Complexity: O(n)
- Space Complexity: O(1)

```javac
public class RomanToInteger {
    public static int romanToInt(String s) 
    {
        int num = 0;
        final int SIZE = s.length();

        for (int i = 0; i < SIZE; ++i) 
        {
            char c = s.charAt(i);
            int val;

            switch(c)
            {
                case 'M': num += 1000;  break;
                case 'D': num += 500;   break;
                case 'L': num += 50;    break;
                case 'V': num += 5;     break;
                case 'I':
                          {
                              val = 1;
                              if (i+1 < SIZE && s.charAt(i+1) == 'V')
                              {
                                  val = 4;
                                  ++i;
                              }
                              else if (i+1 < SIZE && s.charAt(i+1) == 'X')
                              {
                                  val = 9;
                                  ++i;
                              }
                              num += val;
                              break;
                          }
                case 'X':
                          {
                              val = 10;

                              if (i+1 < SIZE && s.charAt(i+1) == 'L')
                              {
                                  val = 40;
                                  ++i;
                              }
                              else if (i+1 < SIZE && s.charAt(i+1) == 'C')
                              {
                                  val = 90;
                                  ++i;
                              }
                              num += val;
                              break;
                          }
                case 'C':
                          {
                              val = 100;
                              if (i+1 < SIZE && s.charAt(i + 1) == 'M') 
                              {
                                  val = 900;
                                  ++i;
                              } 
                              else if (i+1 < SIZE && s.charAt(i + 1) == 'D') 
                              {
                                  val = 400;
                                  ++i;
                              } 
                              num += val;
                              break;
                          }
                default:
            }
        }

        return num;
    }
}
```
