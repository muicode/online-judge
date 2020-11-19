# Runtime: 40 ms, faster than 90.00% 
# Memory Usage: 210 MB, less than 10.00% 
def create_target_array(nums, index)
  result = []
  for i in (0...index.size) do
    result.insert(index[i], nums[i]) 
  end

  result
end
