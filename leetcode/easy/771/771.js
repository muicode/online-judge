/**
 * Runtime: 80 ms, faster than 79.03%
 * Memory Usage: 38.8 MB, less than 62.63%
 */
var numJewelsInStones = function(J, S) {
    let cnt = 0;
    S = S.split('');
    S.forEach(c => {
        (J.includes(c)) ? cnt += 1 : cnt;
    })
    
    return cnt;
};
