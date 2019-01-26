
"""

PROBLEM 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

"""

#   SOLUTION  ->

def prime(n):
    for i in range(3, n):
        if n % i == 0:
            return False
    return True

x = int(600851475143)
end=x
fac=[]
for n in range(3,x):
    if prime(n) and x%n==0:
        fac.append(n)
        end=int(end/n)
        if(end==1):break
print("All prime Factors : ",fac)
print("Largest one : ",fac[-1])




#  Answers : 6857
