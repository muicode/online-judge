a = []
0.upto(8)  do
    a.push(gets.to_i)
end

puts a.max
puts (a.find_index a.max)+1
