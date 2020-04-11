h, m = gets.split.map(&:to_i)
m -= 45

if m<0
    m = 60 + m
    h = (h==0) ? 23 : h-1
end

puts "#{h} #{m}"
