year = gets.to_i
puts ((year%4==0) && (year%100!=0)) || (year%400==0) ? 1 : 0
