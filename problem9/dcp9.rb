def dcp9(nums)
  incl = 0
  excl = 0

  for el in nums
    temp = excl > incl ? excl : incl
    incl = el + excl
    excl = temp
  end

  incl
end

nums = [2, 4, 6, 2, 5]
nums2 = [4, 1, 1, 4, 2, 1]
puts dcp9 nums2
