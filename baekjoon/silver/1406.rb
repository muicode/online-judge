s = gets.chomp.split(//)
i = s.size - 1
n = gets.to_i

1.upto(n) do
  puts "i: #{i}"
puts s.join()
  a, b = gets.split
  if a == 'L'
    i = i==0 ? 0 : i-1
  elsif a == 'D'
    i = i==(s.size-1) ? i : i+1
  elsif a == 'B'
    if i>0
      s.delete_at (i-1)
      i -= 1
    end
  else
    if i==0
      s = [b] + s[0...s.size]
    else
      s = s[0..i] + [b] + s[i+1...s.size]
    end
    i += 1
  end
end

puts s.join()
