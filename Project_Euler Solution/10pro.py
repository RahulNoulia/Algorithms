"""
Summation of primes
Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
"""

import math
sum = 0
prime = []
n = 2000000
upto_n = int(math.sqrt(n))
prime = [1 for i in range(n+1)] 
prime[0],prime[1] =0,0
for i in range(2,upto_n+1,1):
        if prime[i] == 1:
                for k in range(i*i,n+1,i):
                        prime[k] = 0
for i in range(2,n):
        if prime[i] == 1:
            sum +=i
print(sum)           
                