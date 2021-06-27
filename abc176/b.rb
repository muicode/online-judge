n=gets.chomp
x=0
n = n.split('')
n.each do |a|
  x += a.to_i
end

puts (x%9==0) ? 'Yes' : 'No'
