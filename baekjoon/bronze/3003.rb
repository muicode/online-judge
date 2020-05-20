chess = [1, 1, 2, 2, 2, 8]
f = gets.split.map(&:to_i)

f.each_with_index do |x, i|
  print "#{chess[i]-x} "
end
