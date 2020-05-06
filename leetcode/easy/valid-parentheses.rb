# runtime: 36ms, faster than 56.14%
# memory: 9.4 MB, < 100.00%
def is_valid(s)
  return false if s[0] == ')' or s[0] == '}' or s[0] == ']'

  s = s.split(//)
  op = []
  s.each do |c|
    if c=='(' or c=='{' or c=='['
      op.push(c)
    else
      opc = op.pop
      return false if c==')' and opc != '('
      return false if c==']' and opc != '['
      return false if c=='}' and opc != '{'
    end
  end
  op.empty?
end

# runtime: 20ms, faster than 100.00%
# memory: 9.3 MB, < 100.00%
def is_valid2(s)
  return false if s[0] == ')' or s[0] == '}' or s[0] == ']'

  op = []
  size = s.size
  for i in 0...size
    c = s[i]
    if c=='(' or c=='{' or c=='['
      op.push(c)
    else
      opc = op.pop
      return false if c==')' and opc != '('
      return false if c==']' and opc != '['
      return false if c=='}' and opc != '{'
    end
  end
  op.empty?
end

test_cases = [
  ["()", true],
  ["(){}[]", true],
  ["(]", false],
  ["([)]", false],
  ["{[]}", true]
]

for t in test_cases
  puts "expected #{t[1]} and got #{is_valid2(t[0])}"
end
