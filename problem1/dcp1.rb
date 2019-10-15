require 'benchmark'

def bruteforce(arr, k)
    n = arr.size

    for i in (0 ... n - 1)
        for j in (i + 1 ... n)
            if arr[i] + arr[j] == k
                puts "found: #{arr[i]} + #{arr[j]} = #{k}"
                return
            end
        end
    end

    puts "none exists"
end

def one_pass(arr, k)
    m = Hash.new(0)

    arr.each do |n|
        if m.has_key? (k - n)
            puts "found: #{k - n} + #{n} = #{k}"
            return
        else
            m[n] = (k - n)
        end
    end
    puts "none exists"
end

size = 99999
arr = [*1 ... size].shuffle
k = rand(size)
puts "k = #{k}"
time = Benchmark.realtime {
    bruteforce(arr, k)
}
puts "#{time} seconds"
puts
time = Benchmark.realtime {
    one_pass(arr, k)
}
puts "#{time} seconds"
puts
