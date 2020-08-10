def bubble arr
  size = arr.size
  0.upto(size-1) do |i|
    0.upto(size-2-i) do |j|
      if arr[j] > arr[j+1]
        arr[j], arr[j+1] = arr[j+1], arr[j]
      end
    end
  end
  arr
end

def selection arr
  size = arr.size

  0.upto(size-1) do |i|
    val = arr[i]
    pos = i

    (i+1).upto(size-1) do |j|
      if arr[j] < val
        val = arr[j]
        pos = j
      end
    end
    arr[pos] = arr[i]
    arr[i] = val
  end
  arr
end

n = gets.to_i
a = []
n.times do |i|
  a << gets.to_i
end
#a.sort!
#a = bubble(a)
a = selection(a)
puts a
