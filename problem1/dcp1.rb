def onepass(nums, k)
  hash = Hash.new(0)

  nums.each do |x|
    if hash.has_key? (k-x)
      return true
    else
      hash[x] = k-x
    end
  end

  return false
end

nums = gets.split().map(&:to_i)
k = gets.to_i

puts onepass(nums, k)
