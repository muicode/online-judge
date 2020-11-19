/**
 * Runtime: 0 ms, faster than 100.00%
 * Memory Usage: 8.8 MB, less than 34.60%
 */
class Solution {
  public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
      vector<int> result;

      for (int i=0; i<index.size(); ++i)
      {
        auto it = result.begin();
        result.insert(it + index[i], nums[i]);
      }


      return result;
    }
};
