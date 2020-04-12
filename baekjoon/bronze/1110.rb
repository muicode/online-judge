start = gets.to_i
work = start
cycle = 0

while true   
    work = (work%10)*10 + (work/10 + work%10)%10
    cycle += 1
    break if work == start
end

puts cycle
