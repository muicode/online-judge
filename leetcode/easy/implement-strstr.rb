# sort of cheating because i need to implement my own
# runtime: 32 ms, faster than 86.93%
# memory: 9.5 MB, < 100.00%
def strstr(haystack, needle)
  return 0 if !needle or needle.empty?
  pos = haystack.index needle
  return pos == nil ? -1 : pos
end

# solution page 28 ms code but still got 32 ms?
# runtime: 32 ms, faster than 86.93%
# memory: 9.5 MB, < 100.00%
def leetcode_strstr(haystack, needle)
  return 0 if needle == ''
  len = needle.size
  i = 0

  while haystack[i + len -1]
    return i if haystack[i, len] == needle
    i += 1
  end
  -1
end

# runtime: 36ms, faster than 64.713%
# memory: 9.5 MB, less than 100.00%
def my_strstr(haystack, needle)
    return 0 if needle == ''
    nsize = needle.size
    i = 0
    while true
        break if haystack[i+nsize-1] == nil
        return i if haystack[i...(i+nsize)] == needle
        i += 1
    end
    
    return -1
end


puts my_strstr("mississippi", "issip")
puts faster_strstr("mississippi", "issip")
