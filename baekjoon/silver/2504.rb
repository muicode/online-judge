# good test case: (()([())])
# answer should be 0

$open = [0,0]
$close = [0,0]

def evaluate(c, stack)
  p = stack.pop

  if c == ')' and p == '('
    stack.push(2)
  elsif c == ']' and p == '['
    stack.push(3)
  else
    val = 0
    while p != '[' and p!= '('
      val += (p * (c==')' ? 2 : 3))
      p = stack.pop
      if (c == ')' and p == '[') or (c == ']' and p == '(')
        return -1
      end
    end
    stack.push(val)
  end
end

s = gets.chomp
ans = nil
if (s.size&1)==1 
  $close[0] = 1
elsif s[0] == ')' or s[0] == ']'
  $close[0] = 1
elsif s.empty?
  $close[0] = 1
else
  stack = []
  size = s.size

  for i in 0...size
    c = s[i]
    if c == '(' or c == '['
      c == '(' ? $open[0]+=1 : $open[1]+=1
      stack.push(c)
    else
      c == ')' ? $close[0]+=1 : $close[1]+=1
      break if $close.sum > $open.sum
      if evaluate(c, stack) == -1
        $close[0] += ($open.sum + 1)
        break
      end
    end
  end
end

puts ($open[0] != $close[0] or $open[1] != $close[1]) ? 0 : stack.sum
