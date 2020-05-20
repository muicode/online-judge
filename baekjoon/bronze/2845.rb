l, p = gets.split.map(&:to_i)
total = l*p
gets.split.map(&:to_i).each {|x| print "#{x-total} "}
puts
