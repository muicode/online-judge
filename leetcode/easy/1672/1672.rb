# Runtime: 52 ms, faster than 74.77% 
# Memory Usage: 209.8 MB, less than 96.73%
def maximum_wealth(accounts)
  max = 0

  accounts.each do |bank|
    sum = 0
    bank.each do |money|
      sum += money
    end
    max = sum > max ? sum : max
  end

  max
end
