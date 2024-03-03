# Week 5: Assignment💡

<h1>Question 1</h1>

**Convergence depth of Collatz function**

The Collatz function is defined for a positive integer n as follows.
f(n)={3n+1,n/2,if n oddif n is even


We consider the repeated application of the Collatz function starting with a given integer n, as
follows: 

f(n), f(f(n)), f(f(f(n))),…

It is conjectured that no matter which positive integer n you start from, this sequence eventually will have 1 in it. It has been verified to hold for numbers up to 5 × 260 [Wikipedia: Collatz Conjecture].

e.g. If n=7, the sequence is
    f(7) = 22
    
    f(f(7)) = f(22) = 11
    
    f(f(f(7))) = f(11) = 34

    f(34) = 17
    
    f(17) = 52
    
    f(52) = 26
    
    f(26) = 13
    
    f(13) = 40
    
    f(40) = 20
    
    f(20) = 10
    
    f(10) = 5
    
    f(5) = 16
    
    f(16) = 8
    
    f(8) = 4
    
    f(4) = 2
    
    f(2) = 1
    
Thus if you start from n=7, you need to apply f 16 times in order to first get 1.

In this question, you will be given a positive number <= 32,000. You have to output how many
times f has to be applied repeatedly in order to first reach 1.

<h1>Question 2</h1>

**BlockSum of an Array**

Given an integer array M
 having size n which is power of 2, 
Write a recursive code to find the BlockSum of the array M.

The following is the recursive  definition of BlockSum:

If size of M is 2, say M=[a,b]
, where a and b are integers, then BlockSum(M)=a−b
.

Otherwise (when n > 2), partition M into two subarrays of equal size:


                          M=[AB]


The BlockSum of M is defined recursively as : 

                           BlockSum(M)=BlockSum(A)−BlockSum(B)


Here A and B are arrays of Size n/2 each.
A is the first n/2 elements of M ( in the same order) and B is the last n/2 elements of M ( in the same order). 

Note : You can assume that size of input array is a power of 2, and the size is less than 1024. 

**Input**

The first line contains the array size n
The next n lines contains the elements of the array M.

**Output**

BlockSum(M)
