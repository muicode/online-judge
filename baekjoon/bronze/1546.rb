n = gets.to_i
*g = gets.split.map(&:to_f)
max = g.max
*g = g.map{|i| (i*100)/max}
puts g.sum / g.size
