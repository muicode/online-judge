burger = gets.to_i

for i in 0...2
    a = gets.to_i
    if a < burger
        burger = a
    end
end

drink = gets.to_i
a = gets.to_i
if a < drink
    drink = a
end

puts burger + drink - 50
