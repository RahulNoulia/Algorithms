 
"""
Problem 5

Smallest multiple

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

"""

for i in range(20, 2000000000, 20):
    count = 0
    for j in range(1, 21, 1):
        if i % j == 0:
            count += 1
        else:
            break
    if count == 20:
        print(i)
        break

"""

ANSWER : 232792560

OPTIMISED CODE HERE  :

 i = 1
 for k in (range(1, 21)):
     if i % k > 0:
         for j in range(1, 21):
             if (i*j) % k == 0:
                 i *= j
                 break
 print (i)

"""
