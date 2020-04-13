n = gets.to_i

(n).downto(1) do |i|
    print ' ' * (n - i)
    puts '*' * (2*i-1)
end
for i in 2..n
    print ' ' * (n - i)
    puts '*' * (2*(i-1)+1)
end
