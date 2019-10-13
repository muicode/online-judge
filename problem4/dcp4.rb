###############################################################################
# 2019-09-21
###############################################################################
# This problem was asked by Stripe.
#
# Given an array of integers, find the first missing positive integer in 
# linear time and constant space. In other words, find the lowest positive 
# integer that does not exist in the array. The array can contain duplicates 
# and negative numbers as well.
#
# For example, the input [3, 4, -1, 1] should give 2. 
# The input [1, 2, 0] should give 3.
#
# You can modify the input array in-place.
###############################################################################

# Linear Time
# Linear Space
def dcp4(input)
    max = input.max                   # linear
    b = ([*1 .. max] - input)

    if b.empty?                       # constant
        return max+1 
    end

    b.first                           # constant
end

# Linear Time
# Constant Space
def dcp4_2(input)
    target = 1
    input.delete_if { |x| x <= 0 }
    input.sort!                       # in-place sorting?

    input.each do |x|                 # linear
        next if x == target - 1
        break if x != target

        if x == target
            target += 1
        end
    end

    target
end

puts dcp4([3, 4, -1, 1])
puts dcp4([1, 2, 0])
puts dcp4([1, 1, 1, 1, 2, 5])
puts dcp4([*(-100)..10, 11])
puts dcp4([*(-100)..10, 12])
puts
puts dcp4_2([3, 4, -1, 1])
puts dcp4_2([1, 2, 0])
puts dcp4_2([1, 1, 1, 1, 2, 5])
puts dcp4_2([*(-100)..10, 11])
puts dcp4_2([*(-100)..10, 12])
