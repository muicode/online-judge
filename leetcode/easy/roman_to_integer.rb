# runtime: 40ms, faster than 100.00%
# memory: 9.3 MB, < 100.00%
def roman_to_int(s)
  rti = {
    'I' => 1,
    'V' => 5,
    'X' => 10,
    'L' => 50,
    'C' => 100,
    'D' => 500,
    'M' => 1000,
    'IV' => 4,
    'IX' => 9,
    'XL' => 40,
    'XC' => 90,
    'CD' => 400,
    'CM' => 900
  }
  rti.default = 0

  year = 0
  i = 0
  size = s.size
  while i < size do
    check = rti[s[i]+s[i+1].to_s]
    if check != 0
      year += check
      i += 1
    else
      year += rti[s[i]]
    end
    i+=1
  end

  year
end

test_cases = [
  ["III", 3],
  ["IV", 4],
  ["IX", 9],
  ["LVIII", 58],
  ["MCMXCIV", 1994]
]

for t in test_cases do
  puts "expected #{t[1]} and got #{roman_to_int(t[0])}"
end
