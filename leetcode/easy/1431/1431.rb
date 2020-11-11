# Runtime 56ms
# Faster than 52.02%
# Memory Usage: 210MB, less than 76.88%
def kids_with_candies(candies, extra_candies)
    max = candies.max
    result = []
    
    for x in candies do
       if x + extra_candies >= max then result << true else result << false end 
    end
    result
end
