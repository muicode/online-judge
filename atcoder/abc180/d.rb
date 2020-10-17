x,y,a,b = gets.chomp.split().map(&:to_i)
y = y-x
if (y%a == 0 and y%b == 0)
  puts [a,b].min
elsif (y%a==0) 
  cnt = 0
  while x < y do
    x *= a
    cnt += 1
  end
  puts cnt
elsif (y%b==0) 
  cnt = t = (y-x)/b
  puts cnt
else 
  puts (y%a) + (y%b) - 1
end
