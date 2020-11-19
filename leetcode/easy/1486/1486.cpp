/**
 * Runtime: 0 ms, faster than 100.00%
 * Memory Usage: 6.1 MB
 */
class Solution {
  public:
    int xorOperation(int n, int start) {
      int result = start;
      for(int i=1; i<n; ++i) 
      {
        result = result ^ (start + 2*i);
      }

      return result;
    }
};
