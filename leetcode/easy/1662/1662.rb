# Runtime: 48 ms, faster than 100.00%
# Memory Usage: 210 MB, less than 100.00%
def array_strings_are_equal(word1, word2)
  str1 = word1.join
  str2 = word2.join

  return false if str1.size != str2.size

  for i in (0...str1.size) do
    return false if str1[i] != str2[i] 
  end

  true
end
