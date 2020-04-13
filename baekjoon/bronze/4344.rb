t = gets.to_i
while t > 0
    c, *g = gets.split.map(&:to_i)
    avg = g.sum / c
    printf('%.3f', ((g.select{|x| x>avg}).size)*100.0/c)
    puts "%"
    t -= 1
end
