a,b,c=gets.split.map(&:to_i)
x = (a*b/c.to_f).to_i
y = (a/b.to_f*c).to_i
puts x > y ? x : y
