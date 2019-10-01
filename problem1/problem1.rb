###############################################################################
# 2019-09-18
###############################################################################
# DCP #1 
#
# This problem was recently asked by Google.
#
# Given a list of numbers and a number k, return whether any two numbers from 
# the list add up to k.
#
# For example, given [10, 15, 3, 7] and k of 17, 
# return true since 10 + 7 is 17.
#
# Bonus: Can you do this in one pass?
###############################################################################

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

def two_pass(arr, k)
    m = []

    arr.each do |n|
        m.insert(n)
    end

    arr.each do |n|
        if m.include? (k - n)
            puts "found: #{k - n} + #{n} = #{k}"
            return
        end
    end
    puts "none exists"
end

def one_pass(arr, k)
    m = []

    arr.each do |n|
        if m.include? (k - n)
            puts "found: #{k - n} + #{n} = #{k}"
            return
        else
            m.insert(n)
        end
    end
    puts "none exists"
end

size = 10000
arr = [*0 ... size].shuffle
k = (rand % size) + 1

time = Benchmark.realtime {
    bruteforce(arr, k)
}
puts "#{time} seconds"
puts

time = Benchmark.realtime {
    two_pass(arr, k)
}
puts "#{time} seconds"
puts

time = Benchmark.realtime {
    one_pass(arr, k)
}
puts "#{time} seconds"
puts
