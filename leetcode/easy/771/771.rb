# @param {String} j
# @param {String} s
# @return {Integer}
def num_jewels_in_stones(j, s)
    cnt = 0
    s = s.split('')
    for c in s do
        if j.include?(c) then cnt += 1 end
    end
    cnt
end
