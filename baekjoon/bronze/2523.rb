n = gets.to_i

for i in 1..n
    puts '*'*i
end
(n-1).downto(1) do |i|
    puts '*'*i
end

