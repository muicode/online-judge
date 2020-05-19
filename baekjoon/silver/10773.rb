t = gets.to_i
s = []
1.upto(t) do
  n = gets.to_i
  if n == 0
    s.pop
  else
    s.push(n)
  end
end
puts s.sum
