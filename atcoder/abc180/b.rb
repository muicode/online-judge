def m(x)
  mSum = 0
  eSum = 0
  cSum = 0;

  for i in x
    i = i.abs
    cSum = (i > cSum) ? i : cSum;
    mSum += i;
    eSum += (i*i);
  end

  puts mSum 
  printf "%.15f\n" % (Math.sqrt(eSum))
  puts cSum
end 

x = gets.chomp.to_i
n = gets.chomp.split().map(&:to_i)
m(n)
