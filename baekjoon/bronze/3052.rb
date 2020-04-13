a = []
1.upto(10) do
    a.push(gets.to_i%42)
end
puts a.uniq.size
