t = gets.to_i
while t>0
  stack = []
  answer = "YES"
  p = gets.chomp
  if p[0] == ')'
    stack.push(')')
  else
    for i in 0...p.size
      if p[i] == '('
        stack.push('(')
      else
        if stack.length == 0
          stack.push(')')
          break
        end
        stack.pop
      end 
    end
  end
  puts stack.size != 0 ? "NO" : "YES"
  t -= 1
end
