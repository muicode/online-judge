def decode(s)
    n = s.size

    if n <= 1
        return 1
    elsif n == 2
        if s.to_i <= 26 then return 2 else return 1 end
    else
        return decode(s[1..]) + (if s[0...2].to_i <= 26 then decode(s[2..]) else 0 end)
    end
end

puts "1     : #{decode("1")}"    # => 1
puts "11    : #{decode("11")}"    # => 2
puts "111   : #{decode("111")}"    # => 3
puts "1111  : #{decode("1111")}"    # => 5
puts "4123  : #{decode("4123")}"    # => 3
