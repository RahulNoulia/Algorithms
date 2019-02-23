
"""
10001st prime
Problem 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

"""
import math
count = 0
prime = []
n = 1000000
upto_n = int(math.sqrt(n))
prime = [1 for i in range(n+1)] 
for i in range(2,upto_n,1):
        if prime[i] == 1:
                for k in range(i*i,n+1,i):
                        prime[k] = 0
for i in range(2,n):
        if prime[i] == 1:
                count +=1
                if count == 10001:
                        print(i)
                        break


