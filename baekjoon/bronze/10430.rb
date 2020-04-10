a, b, c = gets.split.map(&:to_i)
puts (a+b)%c
puts ((a%c) + (b%c))%c
puts (a*b)%c
puts ((a%c)*(b%c))%c
