/**
 * Runtime: 76 ms, faster than 84.03% 
 * Memory Usage: 38.7 MB, less than 7.03%
 */
var kidsWithCandies = function(candies, extraCandies) {
    let max = Math.max(...candies);
    let result = [];
    
    for (let i=0; i<candies.length; ++i)
        if (candies[i] + extraCandies >= max)
            result.push(true);
        else
            result.push(false);
    return result;
};

/**
 * Runtime: 80 ms, faster than 62.62%
 * Memory Usage: 38.9 MB, less than 7.03%
 */
var kidsWithCandies = function(candies, extraCandies) {
    let max = Math.max(...candies);
    let result = [];
    
    candies.forEach(e => {
        result.push(((e + extraCandies) >= max) ? true : false);
    })
    
    return result;
};
