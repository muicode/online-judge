/**
 * Runtime: 88 ms, faster than 73.88%
 * Memory Usage: 39.2 MB, less than 79.04%
 */
var restoreString = function(s, indices) {
    let result = new Array(indices.length);
    let j = 0;
    indices.forEach(i => {
        result[i] = s[j];
        j+=1
    })
    
    return result.join('');
};
