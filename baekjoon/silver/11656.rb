s = gets.chomp
arr = [s]
s = s.split('')
1.upto(s.size-1) do |i|
  arr << s[i..-1].join()
end

puts arr.sort
