n = gets.to_i
a = gets.split.map(&:to_i)

goal = n/2
sum = 0
min = -10**9

while goal != 0
    max = a.max
    maxi = a.find_index max

    if maxi==0
        if a[maxi+1] != min
            sum += max
            a[maxi] = min
            goal -= 1
        end
    elsif maxi == a.size-1
        if a[maxi-1] != min
            sum += max
            a[maxi] = min
            goal -= 1
        end
    elsif a[maxi-1] != min && a[maxi+1] != min-10
        sum += max
        a[maxi] = min
        goal -= 1
    else
        a[maxi] = min-2
    end
end

puts sum
