a = gets.to_i
g = ''
if a >= 90
    g = 'A'
elsif a>=80
    g = 'B'
elsif a>=70
    g = 'C'
elsif a>=60
    g = 'D'
else
    g = 'F'
end

puts g
