n, m = gets.split.map(&:to_i)
dp = Array.new(n+1){Array.new(m+1,0)}
1.upto(n) do |i|
  gets.split.map(&:to_i).to_a.each_with_index do |x, j|
    dp[i][j+1] = x + dp[i-1][j+1] + dp[i][j] - dp[i-1][j]
  end
end

k = gets.to_i
1.upto(k) do 
  i,j,x,y = gets.split.map(&:to_i)
  puts dp[x][y] - dp[i-1][y] - dp[x][j-1] + dp[i-1][j-1]
end
