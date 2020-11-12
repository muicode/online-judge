=begin
 Runtime: 52 ms, faster than 72.86% 
 Memory Usage: 210.1 MB, less than 81.12%
=end
def running_sum(nums)
    sum = nums.sum
    nums << sum;
    
    (nums.size-2).downto(0) do |i|
        temp = nums[i]
        nums[i] = sum - nums[i];
        sum -= temp
    end
    
    nums.shift
    nums
end
