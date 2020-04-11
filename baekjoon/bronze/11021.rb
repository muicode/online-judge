t = gets.to_i

for i in 0...t
    a, b = gets.split.map(&:to_i)
    puts "Case ##{i+1}: #{a+b}"
end
