def cons(a,b)
  pair = ->(f) {
    return f.call(a, b)
  }
  return pair
end

def car(f)
  left = ->(a, b) { return a }
  return f.call(left)
end

def cdr(f)
  right = ->(a, b) { return b }
  return f.call(right)
end

puts "left: #{car(cons(3, 4))}"
puts "right: #{cdr(cons(3, 4))}"
