require 'benchmark'

# time: O(n)
def dcp2_div(arr)
  product = arr.inject(:*) 
  arr.each_with_index do |x, i|
    arr[i] = product/x
  end
end

# time: O(n^2)
# memory: O(1)
def dcp2_naive(arr)
  size = arr.size
  new_arr = [1]*size

  for i in 0...size
    for j in 0...size
      next if j == i
      new_arr[i] *= arr[j]
    end
  end

  new_arr
end

# time: O(n)
# memory: O(n)
def dcp2_better?(arr)
  storage = arr.clone
  new_arr = []

  arr.each do
    x = storage.shift()
    new_arr.push(storage.inject(:*))
    storage.push(x)
  end

  new_arr
end

n = 10000
arr = (1..n).map { rand() }
Benchmark.bm do |x|
	x.report("solution1: ") { dcp2_div(arr) }
  x.report("solution2: ") { dcp2_naive(arr) }
  x.report("solution3: ") { dcp2_better?(arr) }
end
