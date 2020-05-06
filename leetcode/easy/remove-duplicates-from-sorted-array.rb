# runtime: 40ms, faster than 92.09%
# memory: 9.2 MB, < 100.00%
def remove_duplicates(nums)
  return 0 if !nums or nums.empty?
  size = nums.size
  pos = 1
  for i in 0...size-1
    if nums[i] != nums[i+1]
      nums[pos] = nums[i+1]
      pos += 1
    end
  end

  return pos
end

remove_duplicates [1,1,2]
