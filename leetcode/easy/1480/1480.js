/**
 * Runtime: 80 ms, faster than 66.97%
 * Memory Usage: 38.7 MB, less than 5.17%
 */
var runningSum = function(nums) {
    let sum = nums.reduce((a, b) => a + b, 0);
    let neg = nums[nums.length-1];
    nums[nums.length-1] = sum;
    
    for (let i=nums.length-2; i>=0; --i) {
        let val = sum - neg;
        neg += nums[i];
        nums[i] = val;
    }
    
    return nums;
};
