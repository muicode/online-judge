t = gets.to_i
while t>0
    score = 0
    pt = 1
    str = gets.chomp
    for i in 0...str.size
        if str[i] == 'O'
            score += pt
            pt += 1  
        else
            pt = 1
        end
    end
    puts score
    t -= 1
end
