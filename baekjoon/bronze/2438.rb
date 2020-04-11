=begin
n = gets.to_i
for i in 0...n
    for j in 0..i
        putc '*'
    end
    puts
end
=end

n = gets.to_i
for i in 1..n
    puts '*'*i
end
