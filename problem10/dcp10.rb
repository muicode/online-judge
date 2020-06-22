def hello_func
  puts "hello"
end

def scheduler(f, n)
  sleep(n/1000)
  f.call
end

# call after 4 seconds
n = 4000
scheduler(method(:hello_func),  n)
