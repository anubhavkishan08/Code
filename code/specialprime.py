import math  
def maxPrimeFactors (n):
    maxPrime = -1
    while n % 2 == 0:
        maxPrime = 2
        n >>= 1 
    for i in range(3, int(math.sqrt(n)) + 1, 2): 
        while n % i == 0: 
            maxPrime = i 
            n = n / i 
    if n > 2: 
        maxPrime = n 
    return int(maxPrime) 

# Driver code to test above function 
n = 9
print(maxPrimeFactors(n)) 



# This code is contributed by "Sharad_Bhardwaj". 
