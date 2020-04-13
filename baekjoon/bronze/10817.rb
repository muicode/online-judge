a, b, c = gets.split.map(&:to_i)
if (a>=b && a<=c) || (a<=b && a>=c)
    puts a
elsif (b>=a && b<=c) || (b<=a && b>=c)
    puts b
else
    puts c
end
