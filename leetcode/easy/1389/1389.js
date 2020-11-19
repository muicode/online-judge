/**
 * Runtime: 80 ms, faster than 47.00%
 * Memory Usage: 38.9 MB, less than 23.33%
 */
var createTargetArray = function(nums, index) {
  let result = []
  for(let i=0; i<index.length; ++i) {
    result.splice(index[i], 0, nums[i]);
  }

  return result;
};
