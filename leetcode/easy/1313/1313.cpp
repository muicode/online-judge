/*
 * Runtime: 4 ms, faster than 95.70% 
 * Memory Usage: 10.2 MB, less than 83.96%
 */
class Solution {
  public:
    vector<int> decompressRLElist(vector<int>& nums) {
      vector<int> result;
      for(int i=0; i<nums.size(); i+=2) 
      {
        int freq = nums[i];
        int val = nums[i+1];

        for(int j=0; j<freq; ++j)
        {
          result.push_back(val);
        }
      }
      return result;
    }
};
