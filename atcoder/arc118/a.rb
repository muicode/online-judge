t, N = gets.chomp.split.map(&:to_i)
a = (100.0/t)
b = (a*2+1) - a
puts ((((a + (b*(N-1)))*100).to_i)/100.0).ceil
