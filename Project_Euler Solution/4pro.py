"""
PROBLEM 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.


"""

#   SOLUTION  ->

largest_palindrome = []
for i in range(999,99,-1):
    for j in range(999,99,-1):
        c = int(i * j)
        d = c
        r = 0
        while c > 0:
            r = int(r * 10 + c % 10)
            c = int(c/10)
        if d == r:
            largest_palindrome.append(r)

print("Largest palindrome made from the product of two 3-digit numbers : ",max(largest_palindrome))


# Answer is  : 906609
