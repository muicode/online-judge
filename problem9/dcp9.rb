def dcp9(nums)
  incl = 0
  excl = 0

  for el in nums
    temp = excl > incl ? excl : incl
    incl = el + excl
    excl = temp
  end

  return excl > incl ? excl : incl
end

testcase = [
  # [testcase, expected value]
  [ [2, 4, 6, 2, 5],   13 ],
  [ [4, 1, 1, 4, 2, 1], 9 ], 
  [ [5, 1, 1, 5],      10 ],
  [ [5, 1],             5 ],
  [ [5],                5 ],
  [ [],                 0 ]
]

for t in testcase
  puts "expected: #{t[1]} and got #{dcp9 t[0]}"
end
