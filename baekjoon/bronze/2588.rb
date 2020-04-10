a = gets.to_i
b = gets.to_i
c = [a * (b%10), a * ((b%100)/10), a * (b/100)]
puts "#{c[0]}\n#{c[1]}\n#{c[2]}"
puts c[0]+c[1]*10+c[2]*100
