/**
 * Runtime: 60 ms, faster than 100.00%
 * Memory Usage: 38.2 MB, less than 83.71%
 */
var xorOperation = function(n, start) {
  let result = start;

  for (let i=1; i<n; ++i) {
    result = result ^ (start + 2*i);
  }

  return result;
};
