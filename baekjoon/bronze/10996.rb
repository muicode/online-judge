n = gets.to_i
if n==1
    puts '*'
else
    for i in 1..(n*2)
        for j in 1..n
            if i&1==1
                print "#{j&1==1 ? '*' : ' '}"
            else
                print "#{j&1==1 ? ' ' : '*'}"
            end
        end
        puts
    end
end
