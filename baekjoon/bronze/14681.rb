a = gets.to_i
b = gets.to_i

if a>=0 && b>=0
    puts 1
elsif a<0 && b>=0
    puts 2
elsif a<0 && b<0
    puts 3
else
    puts 4
end
