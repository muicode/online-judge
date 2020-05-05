# Runtime: 32ms, 92.21%
# Memory: 9.9MB, < 45.45%
def two_sum(nums, target)
  hash = Hash.new
  nums.each_with_index do |x, i|
    diff = target - x
    if hash.include? diff
      return [nums.find_index(diff), i]
    end
    hash[x] = diff
  end
end

testcases = [
  [[2, 7, 11, 15], 9, [0, 1]],
  [[2, 7, 11, 15], 13, [0, 2]],
  [[2, 7, 11, 15], 17, [0, 3]],
  [[2, 7, 11, 15], 18, [1, 2]],
  [[2, 7, 11, 15], 22, [1, 3]],
  [[2, 7, 11, 15], 26, [2, 3]],
]

for t in testcases do
  print "expected #{t[2]} and got #{two_sum(t[0], t[1])}\n"
end
