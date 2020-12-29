/**
 * Runtime: 80 ms, faster than 56.45% 
 * Memory Usage: 38.7 MB, less than 35.23%
 */
var maximumWealth = function(accounts) {
  let max = 0;
  accounts.forEach((bank) => {
    let sum = 0;
    bank.forEach((money) => {
      sum += money;
    });
    max = sum > max ? sum : max;
  });

  return max;
};
