n = gets.to_i
x = []
1.upto(Math.sqrt(n)) do |i|
  if n % i == 0
    if (n/i ==i)
      x<<i
    else 
      x << i
      x << n/i
    end
  end
end

x.sort!
puts x
