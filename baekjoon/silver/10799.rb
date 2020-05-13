p = gets.chomp

pieces = 0
line = 0
i = 0
while i < p.size
  if p[i] == '('
    if p[i+1]==')'
      pieces += line
      i+=1
    else
      line += 1
    end
  else
    pieces += 1
    line -= 1
  end

  i+=1
end

puts pieces
