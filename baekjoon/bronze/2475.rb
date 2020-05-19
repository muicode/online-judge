a = gets.split().map(&:to_i)
sum = 0
a.each do |x|
  sum += x*x
end
puts sum%10
