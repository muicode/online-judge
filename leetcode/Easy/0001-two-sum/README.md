## [Leetcode](https://leetcode.com/)

[1. Two Sum](https://leetcode.com/problems/two-sum/) (`Array` `Hash Table`)


### Bruteforce
- Time Complexity: O(n^2)
- Space Complexity: O(1)

```java
public class TwoSum {
    public static int[] twoSumBruteForce(int[] nums, int target) {
        int size = nums.length;
        int[] sol = null;

        for (int i=0; i<size-1; ++i) {
            for (int j=i+1; j<size; ++j) {
                if (nums[i] + nums[j] == target) {
                    sol = new int[] {i, j};
                    i = j = size;
                    break;
                }
            }
        }

        return sol;
    }
}
```

### Two-pass Hash Table
- Time Complexity: O(n)
- Space Complexity: O(n)

```java
public class TwoSum {
    public static int[] twoSumTwoPass(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i< nums.length; ++i) {
            map.put(nums[i],  i);
        }

        for (int i=0; i<nums.length; ++i) {
            int complement = target - nums[i];
            if (map.containsKey(complement) && map.get(complement) != i) {
                return new int[] {i, map.get(complement)};
            }
        }

        return null;
    }
}
```

### One-pass Hash Table
- Time Complexity: O(n)
- Space Complexity: O(n)

```java
public class TwoSum {
    public static int[] twoSumOnePass(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<nums.length; ++i) {
            int complement = target - nums[i];
            if (map.containsKey(complement)) {
                return new int[] { map.get(complement), i };
            }

            map.put(nums[i], i);
        }

        return null;
    }
}
```
