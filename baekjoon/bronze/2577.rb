a = gets.to_i
b = gets.to_i
c = gets.to_i
t = [0]*10
a = a*b*c
while a > 0
    t[a%10]+=1
    a/=10
end

puts t
