def autocomplete(s, strs)
  hash = Hash.new
  strs.each do |str|
    if str.include? s
      hash[str] = true
    else
      hash[str] = false
    end
  end

  ret = []

  hash.each do |k, v|
    if v == true
      ret << k
    end
  end

  ret
end

s = "de"
strs = ["dog", "deer", "deal"]

p autocomplete(s, strs)
