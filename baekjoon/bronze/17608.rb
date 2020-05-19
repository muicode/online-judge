t = gets.to_i
s = []
1.upto(t) do
  s.push(gets.to_i)
end

min = s.pop
ans = 1
while !s.empty?
  x = s.pop
  if x > min
    ans += 1
    min = x
  end
end

puts ans
