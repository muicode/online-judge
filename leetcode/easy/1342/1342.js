/**
 * Runtime: 80 ms, faster than 65.29%
 * Memory Usage: 38.8 MB, less than 26.72% 
 */
var numberOfSteps  = function(num) {
    let cnt = 0;
    
    while (num > 0) {
        if ((num & 1) == 0) num = num / 2;
        else num -= 1;
        ++cnt;
    }
    
    return cnt;
};
