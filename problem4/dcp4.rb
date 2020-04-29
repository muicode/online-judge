require 'benchmark'

def dcp4_naive(arr)
  size = arr.size

  for i in 1..size
    if (arr.include? i) == false
      return i
    end
  end

  return size+1
end

def dcp4_hash(arr)
  size = arr.size
  hash = Hash[arr.map {|x| [x, x]}]

  for i in 1..size
    if (hash.include? i) == false
      return i
    end
  end

  return size+1
end


def dcp4_optimized(arr)
  size = arr.size
  arr.push(0)

  out_of_range = ->(x) {
    return x < 1 || x > size
  }

  for i in 0...size
    while true
      break if out_of_range.call(arr[i])
      
      correct = arr[i]
      break if arr[correct] == arr[i]

      arr[i], arr[correct] = arr[correct], arr[i]
    end
  end

  for i in 1..size
    if arr[i] != i
      return i
    end
  end

  return arr[size]+1
end
