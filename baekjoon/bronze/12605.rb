t = gets.to_i
1.upto(t) do |i|
  puts "Case ##{i}: #{gets.split(' ').reverse.join(' ')}"
end
