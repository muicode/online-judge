/**
 * Runtime: 92 ms, faster than 35.85% of JavaScript online submissions for Shuffle the Array.
 * Memory Usage: 40.7 MB, less than 5.02% of JavaScript online submissions for Shuffle the Array.
 */
var shuffle = function(nums, n) {
    let result = [];
    
    for(let i=0; i<n; ++i) {
        result.push(nums[i]);
        result.push(nums[n+i]);
    }
    
    return result;
};
