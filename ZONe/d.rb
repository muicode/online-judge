s2 = ''
gets.chomp.each_char { |c|
  if c == 'R'
    s2.reverse!
  else
    s2.concat(c)
  end
}

if s2.length > 1 
  i=0
  run = true
  while run
    if(s2[i] == s2[i+1])
      s2 = s2.gsub(/#{s2[i]}#{s2[i]}/, '')
      i=0
    else 
      i+=1
    end

    run = false if s2[i] == nil or s2[i+1] == nil
  end
end
puts s2
