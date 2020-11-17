# Runtime: 72 ms, faster than 85.11%
# Memory Usage: 210.5 MB, less than 82.98%
def decompress_rl_elist(nums)
    result = []
    
    for i in (0...nums.size()).step(2) do
        f = nums[i]
        v = nums[i+1]
        
        1.upto(f) do
            result << v 
        end
    end
    
    result
end
