def w_division(arr)
    product = arr.inject(:*)
    n = arr.length
    for i in (0 ... n)
        arr[i] = product/arr[i]
    end

    arr
end

def wo_division(arr)
    n = arr.length
    ans = [] * n

    for i in (0 ... n)
        prod = 1
        for j in (0 ... n)
            if j != i
                prod *= arr[j]
            end
        end
        ans[i] = prod
    end
    arr = ans
end

def wo_division2(arr)
    n = arr.length
    ans = [] * n
    
    for i in (0 ... n)
        ans[i] = (arr - [arr[i]]).inject(:*)
    end
    arr = ans
end

# source: https://dev.to/cwetanow/daily-coding-problem-2-21pj @Benjamin Braatz
def dcp2(arr)
    output = []
    right = 1
    arr.reverse.each do |num|
        output.insert(0, right)
        right *= num
    end

    left = 1
    for i in (0 ... arr.size)
        output[i] *= left
        left *= arr[i]
    end
    output
end

require 'benchmark'

'''
arr = [*1 .. 2500]
time = Benchmark.realtime {
    wo_division(arr)
}
puts "#{time} seconds"
time = Benchmark.realtime {
    wo_division2(arr)
}
puts "#{time} seconds"
'''

arr = [1, 2, 3, 4, 5]
print arr
puts
puts dcp2(arr)
