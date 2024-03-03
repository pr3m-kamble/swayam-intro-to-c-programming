# Week 1: Assignment💡

<h1>Question 1</h1>

**Find moving average**

In this question, you have to output the "two moving average" of a sequence of non-negative numbers.

The two moving average is the sequence of averages of the last 2 entries.
For the first number, no average is output.

For example, if the sequence of numbers is $a_1,a_2,a_3,a_4,a_5$
The 2-moving average is  $(a1+a2) \over 2$, $(a2+a3) \over  2$ , $(a3+a4) \over 2$ , $(a4+a5) \over 2$

Input
-------
The input is a sequence of non-negative numbers, terminated by a -1.
There will be at least 3 numbers in the sequence.

Note: The -1 is not part of the sequence. It is just to indicate that the input has ended.

Output
----------
You have to output the moving average of the sequence. The output should be printed correct to one digit after the decimal.

Hint : Use the format specifier "%.1f" inside printf.

<h1>Question 2</h1>


**Prime Checking**

Complete the function int is_prime(int n) to check if a positive number n is prime or not.

The function returns 1 if n is prime, and 0 otherwise.

The function will be used in a program (code given) that prints the prime numbers in a given sequence.

Input
-------
The first line of input is a positive integer N.
The next line contains N positive integers ki for i=1 to N.

Output
---------
The elements in the input list which are primes, in the original order.

<h1>Question 3</h1>

**Find the kth Odd integer in sequence**

Write a C function to find the kth occurrence of an odd integer in a sequence of non-
negative integers.




Input
--------
You are given the input in two lines:

The first line contains a positive integer k.

In the second line, you will be given a sequence of numbers terminated with a -1.
You have to find the kth occurrence of an odd integer in the sequence.

Note:  The -1 is not part of the sequence.

Output
----------
If there are k odd numbers in the sequence, then output the kth occurrence of an odd number in the sequence, if present. If there are less than k odd numbers in the sequence, output -1.


