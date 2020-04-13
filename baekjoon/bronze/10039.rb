avg = 0
for i in 0...5
    a = gets.to_i
    avg += (a<40) ? 40 : a
end

puts avg/5
