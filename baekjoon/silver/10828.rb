t = gets.to_i
top = -1
stack = []
while t > 0
  command = gets

  case command[0]
  when 't'
    puts top==-1 ? -1 : stack[top]
  when 'e'
    puts (top==-1) ? 1 : 0
  when 's'
    puts top+1
  when 'p'
    if command[1]=='u'
      top += 1
      stack.push((command.split)[1].to_i)
    else
      if top == -1
        puts -1
      else
        puts stack.pop
        top -= 1
      end
    end
  end
  t -= 1
end
