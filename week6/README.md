# Week 5: Assignment💡

<h1>Question 1</h1>

**ℓ-window smoothing.**

Given an n×n integer Matrix A and an positive number ℓ such that 2ℓ+1≤n, write a C program to print the ℓ window smoothing of A. 

To get the  ℓ-window smoothing of A , we replace A[i][j] with the sum of the values of the imaginary submatrix S of A with centre at A[i][j], and having size 2ℓ+1×2ℓ+1


More precisely, the smoothed matrix B[i,j] = $\left( \sum_{k=1}^n a_k b_k \right)   \sum_{n=1}^n  A[u][v]$ 

where il=max(i−ℓ,0),ih=min(i+ℓ,n−1),jl=max(j−ℓ,0),jh=min(j+ℓ,n−1).

**Input**

The first line contains the dimension of the matrix n. Assume n < 100.

The second line contains the smoothing parameter ℓ. 

The next n lines contains the contents of the matrix A, each row per line.

**Output**

The smoothed matrix of A

<h1>Question 2</h1>

**Simple Path Finding**

Given an n×n binary Matrix A , where each entry is 0 or 1.
A has a unique path of 1's from  A[0][0] to A[n-1][n-1].
The path always goes Right (R) or Down (D).

Write a C Program.to print the directions of this path.

Note: You can assume that there is exactly one correct path.
All 1's in A are in this unique path, there are no dead ends.

**Input**
The first line contains the dimension of the matrix n. Assume n < 100.
The second line contains the contents of the matrix A, each row per line.

**Output**
The path of 1's in the Matrix.
