/**
 * Runtime: 100 ms, faster than 50.06%
 * Memory Usage: 42.2 MB, less than 66.48%
 */
var decompressRLElist = function(nums) {
  let result = []

  for (let i=0; i<nums.length; i+=2) {
    let f = nums[i];
    let v = nums[i+1];

    for (let j=0; j<f; ++j) {
      result.push(v);
    }
  }

  return result;
};
