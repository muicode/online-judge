/**
 * Runtime: 84 ms, faster than 100.00%
 * Memory Usage: 38.8 MB, less than 100.00%
 */
var arrayStringsAreEqual = function(word1, word2) {
  let str1 = word1.join('');
  let str2 = word2.join('');

  if (str1.length != str2.length) {
    return false;
  }

  for (let i=0; i<str1.length; ++i) {
    if (str1[i] != str2[i])
      return false;
  }

  return true;
};
