s = gets.chomp
# if odd, not valid
if ((s.size)&1) == 1
  puts 0
elsif s[0] == ')' or s[0] == ']'
  puts 0
else
  stack = []

  for i in 0...s.size
    c = s[i]
    if c == '(' or c == '['
      stack.push(c)
    elsif c == ')'
      if stack.empty?
        puts 0
        return
      end

      p = stack.pop
      if p == '('
        stack.push(2)
      elsif p == '['
        puts 0
        return
      else
        n = p 
        p = stack.pop
        if p == '('
          stack.push(n*2)
        elsif p == '[' or p == ')'
          puts 0
          return
        else
          if p == nil
            puts 0
            return
          end
          stack.push(n+p)
        end
      end
    elsif c == ']'
      if stack.empty?
        puts 0
        return
      end

      p = stack.pop
      if p == '['
        stack.push(3)
      elsif p == '('
        puts 0
        return
      else
        n = p
        p = stack.pop
        if p == '['
          stack.push(n*3)
        elsif p == '(' or p == ']'
          puts 0
          return
        else
          if p == nil
            puts 0
            return
          end
          stack.push(n+p)
        end
      end
    end
  end

  p = stack.shift
  stack.unshift(p2)
  if p == '('
    stack.push(stack.shift*2)
  elsif p == '['
    stack.push(stack.shift*3)
  else
    stack.push(p)
  end
  puts stack.sum
end
